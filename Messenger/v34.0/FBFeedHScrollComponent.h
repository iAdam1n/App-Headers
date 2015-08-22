/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:53 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/CKCompositeComponent.h>

@class FBUserSession, FBHScrollComponent;

@interface FBFeedHScrollComponent : CKCompositeComponent {

	FBFeedHScrollComponentOffScreenAutoScrollConfig _offscreenScrollConfig;
	FBUserSession* _session;
	Class _targetComponentClass;
	FBFeedHScrollComponentScrollToPreviewConfig _scrollToPreviewConfig;
	SEL _endDraggingScrollViewAction;
	unsigned long long _verticalBehavior;
	FBHScrollComponent* _hscrollComponent;

}

@property (nonatomic,readonly) FBHScrollComponent * hscrollComponent;              //@synthesize hscrollComponent=_hscrollComponent - In the implementation block
+(id)newWithChildren:(vector<FBHScrollComponentChild, std::__1::allocator<FBHScrollComponentChild> >*)arg1 options:(FBFeedHScrollOptions)arg2 style:(FBHScrollComponentStyle)arg3 session:(id)arg4 ;
-(void)scrollToComponentAtIndex:(unsigned long long)arg1 withDelay:(BOOL)arg2 animated:(BOOL)arg3 ;
-(BOOL)scrollInDirection:(unsigned long long)arg1 withDelay:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)scrollToNextFromContainedComponent:(id)arg1 withDelay:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)endDraggingScrollView:(id)arg1 withContext:(id)arg2 ;
-(void)_scrollVerticallyToCenterHScrollViewWithContext:(id)arg1 fromView:(id)arg2 ;
-(FBHScrollComponent *)hscrollComponent;
@end
