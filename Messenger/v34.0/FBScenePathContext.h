/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:10 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBScenePathContextDelegate.h>

@protocol FBScenePathContextDelegate, FBScenePathHolding;
@class NSMapTable;

@interface FBScenePathContext : NSObject <FBScenePathContextDelegate> {

	id<FBScenePathContextDelegate> _delegate;
	id<FBScenePathHolding> _rootView;
	id<FBScenePathHolding> _activeView;
	NSMapTable* _viewToActiveSubPath;

}
-(id)initWithRootView:(id)arg1 delegate:(id)arg2 ;
-(id)registerView:(id)arg1 ;
-(void)updateActiveView:(id)arg1 ;
-(void)scenePathContextForView:(id)arg1 didInvalidatePath:(id)arg2 ;
-(void)scenePathContextForView:(id)arg1 didUpdateActivePathTo:(id)arg2 ;
-(id)registerView:(id)arg1 withTag:(id)arg2 ;
-(void)invalidateView:(id)arg1 ;
-(id)init;
@end

