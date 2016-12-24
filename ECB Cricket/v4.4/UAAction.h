/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:19:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/08508F9E-DA8B-4AFD-AB09-7444BD482D44/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface UAAction : NSObject {

	/*^block*/id _actionBlock;
	/*^block*/id _acceptsArgumentsBlock;

}

@property (nonatomic,copy) id actionBlock;                        //@synthesize actionBlock=_actionBlock - In the implementation block
@property (nonatomic,copy) id acceptsArgumentsBlock;              //@synthesize acceptsArgumentsBlock=_acceptsArgumentsBlock - In the implementation block
+(id)actionWithBlock:(/*^block*/id)arg1 acceptingArguments:(/*^block*/id)arg2 ;
+(id)actionWithBlock:(/*^block*/id)arg1 ;
-(void)performWithArguments:(id)arg1 actionName:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)acceptsArguments:(id)arg1 ;
-(void)willPerformWithArguments:(id)arg1 ;
-(void)didPerformWithArguments:(id)arg1 withResult:(id)arg2 ;
-(id)acceptsArgumentsBlock;
-(void)setAcceptsArgumentsBlock:(id)arg1 ;
-(void)runWithArguments:(id)arg1 actionName:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)lift:(/*^block*/id)arg1 transformingPredicate:(/*^block*/id)arg2 ;
-(id)lift:(/*^block*/id)arg1 ;
-(id)continueWith:(id)arg1 ;
-(id)preExecution:(/*^block*/id)arg1 ;
-(id)postExecution:(/*^block*/id)arg1 ;
-(id)bind:(/*^block*/id)arg1 ;
-(id)map:(/*^block*/id)arg1 ;
-(id)filter:(/*^block*/id)arg1 ;
-(id)actionBlock;
-(void)setActionBlock:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
@end
