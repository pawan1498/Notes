# About Sidekiq
- it is an background job processing framework for Ruby application 


In RAIls application active job is a framework for decalring jobs and making them run on variety of queuing backends. like sidekiq and resque

## active jobs 

- active job is rails specific background job processing framework. 
- there is default queuing system called "Inline". this inline adapter execute jobs immediately with the same process that enqueue them. 
- some other queueing system are : Sidekiq, Resque 
- we can configue different queueing system in rails application 
- In config/application.rb 
  `config.active_job.queue_adapter = :sidekiq`

Advantage of using active job instead of basic sidekiq worker 
  - abstraction of queue : while using active jobs we are independent of queuing system, we can use any adapter without change any of code .
  - ease of testing : active jobs offer more intergrated testing experience. 


### create a job 
- rails g job job_name 

### Enqueue a job 
- GuestsCleanupJob.perform_later guest
- GuestsCleanupJob.set(wait: 1.week).perform_later(guest)
- GuestsCleanupJob.set(wait_until: Date.tomorrow.noon).perform_later(guest)


## callback 


----------------------------------------
- queuing system = adapter 