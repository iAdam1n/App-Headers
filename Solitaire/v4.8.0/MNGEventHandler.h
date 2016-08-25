/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIViewController, MNGLoadingViewControl;

@interface MNGEventHandler : NSObject {

	/*^block*/id _completionBlock;
	/*^block*/id _errorBlock;
	UIViewController* _viewController;
	MNGLoadingViewControl* _loadingViewControl;

}

@property (nonatomic,copy) id completionBlock;                                        //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,copy) id errorBlock;                                             //@synthesize errorBlock=_errorBlock - In the implementation block
@property (assign,nonatomic) UIViewController * viewController;                       //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) MNGLoadingViewControl * loadingViewControl;              //@synthesize loadingViewControl=_loadingViewControl - In the implementation block
-(MNGLoadingViewControl *)loadingViewControl;
-(void)setLoadingViewControl:(MNGLoadingViewControl *)arg1 ;
-(void)stopLoadingControl;
-(id)initWithController:(id)arg1 completion:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)startLoadingControl;
-(id)errorBlock;
-(void)setErrorBlock:(id)arg1 ;
-(void)dealloc;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
@end

