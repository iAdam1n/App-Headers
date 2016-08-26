/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBIntentHandler, FBNavigationCoordinator, FBPageActionComposingListener;
@interface FBPageActionHandlerToolbox : NSObject {

	id<FBIntentHandler> _intentHandler;
	id<FBNavigationCoordinator> _navigationCoordinator;
	id<FBPageActionComposingListener> _pageActionComposingListener;

}

@property (nonatomic,readonly) id<FBIntentHandler> intentHandler;                                                 //@synthesize intentHandler=_intentHandler - In the implementation block
@property (nonatomic,readonly) id<FBNavigationCoordinator> navigationCoordinator;                                 //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
@property (nonatomic,__weak,readonly) id<FBPageActionComposingListener> pageActionComposingListener;              //@synthesize pageActionComposingListener=_pageActionComposingListener - In the implementation block
-(id<FBIntentHandler>)intentHandler;
-(id<FBNavigationCoordinator>)navigationCoordinator;
-(id)initWithIntentHandler:(id)arg1 navigationCoordinator:(id)arg2 pageActionComposingListener:(id)arg3 ;
-(id<FBPageActionComposingListener>)pageActionComposingListener;
@end
