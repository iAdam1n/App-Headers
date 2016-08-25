/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WAMessageMediaSliceView.h>

@class WALoopingVideoPlayerView;

@interface WAMessageAutoPlayVideoSliceView : WAMessageMediaSliceView {

	WALoopingVideoPlayerView* _player;
	BOOL _isDisplayed;
	BOOL _betweenParentDidAppearAndWillDisappear;

}
-(void)reloadSliceAfterChange:(unsigned long long)arg1 ;
-(void)parentViewDidAppear:(id)arg1 ;
-(void)parentViewWillDisappear:(id)arg1 ;
-(void)parentWillBeginDisplay:(id)arg1 ;
-(void)parentDidEndDisplay:(id)arg1 ;
-(void)updateDisabledState;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)didMoveToSuperview;
@end

