# Importmap 


# sprockets 
- sprockets sbhi assets ko automatically preprocess krke public folder^ mein expose kr deta hai. 
^folder with fingerprinting, compression, source maps generation and other configurable features.

## static files and preprocessed file 
- static file jo hum directly public folder mein daal dete hai, preprocessed file jo ( app/assets wali file ko transpiling and bundling hone ke baad yha laaya jata hai)

Cache Management:
- static file : No automatic cache busting; requires manual management.
- preprocess file :  Usually includes fingerprinting for automatic cache busting.

Use Case:
- Static Files: Best for assets that do not change often and do not need processing.
- Preprocessed Files: Best for assets that need optimization, transformation, or frequent.

** agar public folder mein koi static file dali hai, tho uuse server per dikahne ke liye hume ` config.public_file_server.enabled` ko true set krna hoga . 

## manifest.js
In a Ruby on Rails application, manifest.js is a configuration file used by the asset pipeline to specify how assets should be processed and included in the application. It defines which files should be compiled and made available to the application.

- The manifest.js file is typically located in the app/assets/config directory. This is the default location, but it can vary based on the application setup.

`// app/assets/config/manifest.js

//= link_tree ../images
//= link_directory ../javascripts .js
//= link_directory ../stylesheets .css
`


- (config.assets.css_compressor or config.assets.js_compressor). Compression reduces file size, enabling the browser to download the files faster.

## controllr specified assets 



## Assest organization 
- Pipeline assets can be placed inside an application in one of three locations: app/assets, lib/assets or vendor/assets.
- ** assests ko hum compile krke use kr skte hai or static assests bhi use kr skte hai directly 

- sprocket manifest.js ki help se sabhi assets ko precompile krta hai 
    - command to check all the path for compiling assets 
        `Rails.application.config.assets.paths`

- 