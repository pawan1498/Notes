# s3
## storage yml 
    amazon:
        service: S3
        access_key_id: <%= ENV['AWS_ACCESS_KEY'] %>
        secret_access_key: <%= ENV['AWS_SECRET_KEY'] %>
        region: <%= ENV['AWS_REGION'] %>
        bucket:  <%= ENV['AWS_BUCKET'] %>
        public: <%= ENV['ACTIVE_STORAGE_PUBLIC'] == 'true' %>
        upload:
            cache_control: 'public, max-age=31536000' 

    - max-age : is the expiration time of a presigned URL.
    