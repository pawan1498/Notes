# define routes 
** get 'patient/7 to: 'patient#show as: 'patient **

# resources

- `resources resources_name`
- it will decalre all necessary routes 

## singular route 
- there a scenario that you have to create singular route, Sometimes, you have a resource that clients always look up without referencing an ID
  - ex:   you would like '/profile' always show the profile of currrently logged in user 
** both singular route and plural route map to the same controller (controller must be plural )**

## namespace
-  organise your controller under namspace, like you want to create an admin panel then you might group a number of admin controller under an Admin:: namspace 
   -  namespace :admin do 
        resources :article 
      end 
- If instead you want to route /articles (without the prefix /admin) to Admin::ArticlesController, you can specify the module with a scope block:
  ` scope module: 'admin' do
     resources :articles, :comments
    end
  `
-  If instead you want to route /admin/articles to ArticlesController (without the Admin:: module prefix), you can specify the path with a scope block:
   ` scope '/admin' do
      resources :articles, :comments
     end
   `

- If you need to use a different controller namespace inside a namespace block you can specify an absolute controller path, e.g: get '/foo', to: '/foo#index'.

## nested resource 


### shallow nesting 
- this way we can avoid deep nesting 
- syntax 
  ` resources :articles do
      resources :comments, shallow: true
    end
`


- this is what shallow nesting do 
` resources :articles do
  resources :comments, only: [:index, :new, :create]
end
resources :comments, only: [:show, :edit, :update, :destroy]
`

## creating path and URl 


## Adding more restful action 
1. member route 
2. collection route 
3. Add route for additional new action 
      `resources :comments do
        get 'preview', on: :new
       end
      `
  - output :  preview_new_comment GET    /comments/new/preview(.:format)      comments#preview


# customizing resourcfl routes 
resources :photos, controller: 'images'
