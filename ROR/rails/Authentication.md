# Session based 
- it is a method of varifying the identity of users in a web application by using sessions. 
- A session is a way to store information about a user's interaction with a website across multiple request. 

Step 
1. when a user logs in with valid credential, the server verfies their identity. 
2. upon successfull authentication, the server creates a session which contain session_id and associating it with the user. 
3. Session_id if often stored in a cookies on the user's browser or included in URL 
4. During subsequent request, the user's browser send the session ID, allowing the server to identity and authenticate the user. 
5. Session expiry : session oftern have expiry time to enhance security. 
6. when a user log out, the session is typically invalidate 


In ROR 
- it automatically creates a session and generate a unique session Id for authenticated user. 
- The Rails server sends a response to the user's browser with a Set-Cookie header that includes the session ID. This header is typically set in the HTTP response when the session is created.
  - Set-Cookie: _myapp_session=abc123; Path=/; HttpOnly; Secure; SameSite=Lax   # The browser then stores this session ID in a cookie.
  
- Developers can use the session object to store key-value pairs, such as the user's ID or other relevant data.
  - `session[:user_id] = current_user.id`
- In different controllers or actions, developers can access session variables using the session object.
  - `user_id = session[:user_id]`
- Developers can configure session expiration and timeout to enhance security.
  - `config.session_store :cookie_store, expire_after: 30.minutes`
- RoR handles the security aspects of session data, and developers should avoid storing sensitive information unless necessary. Always use HTTPS to protect session data during transmission.



# token based (JWT)
steps 
1. user Authentication 
  - user provide credential (eg. email and password)
2. Server Verfication 
  - server verfiy user credential by matching records with database
  - If the credentials are valid, the server generates a JWT.
3. Generate JWT 
  - The JWT is composed of three parts: Header, Payload, and Signature.
    - **Header**
      - Specifies the type of token (JWT) and the signing algorithm used.
      -  "alg": "HS256",
      -  "typ": "JWT"
    - **Payload**
      - Contains claims, which are statements about the user and additional data.
    - **Signature **
      - Created by hashing the base64-encoded Header and Payload with a secret key.
      - Ensures the integrity of the token and that it wasn't tampered with.

4. Token Issuance 
  - The server sends the JWT to the client, typically in the response body or headers.

5. Client Storage 
  - The client securely stores the JWT, often in a cookie or local storage.

6. Token Usage : 
  - For subsequent requests to protected resources, the client includes the JWT in the Authorization header.
  - Authorization: Bearer eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJzd...
7. server verification of token 
  - The server receives the JWT in the request.
  - It verifies the signature using the same secret key used for signing.
  - If the signature is valid, the server proceeds to decode the JWT to extract the claims.
8. claim verfication 
  1. The server checks the claims in the Payload, such as:
    - Expiration (exp): Ensures the token hasn't expired.
    - Issuer (iss): Verifies the token's origin.
    - Subject (sub): Identifies the user.
9. Resource Access
  - If the token is valid and all claims are verified, the server allows access to the requested resource.

# 