/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:03 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WAMessageContainerSliceView.h>

@class NSOperationQueue, UIImageView, WAMessageStatusSlice;

@interface WAMessageStatusSliceView : WAMessageContainerSliceView {

	long long _statusAnimationCount;
	long long _starAnimationCount;
	NSOperationQueue* _animationQueue;
	BOOL _lastStarred;
	unsigned long long _lastStatus;
	unsigned long long _animationID;
	UIImageView* _fromStatusView;
	UIImageView* _toStatusView;
	UIImageView* _starView;

}

@property (nonatomic,readonly) WAMessageStatusSlice * slice; 
+(BOOL)supportsPreviewing;
-(void)reloadSliceAfterChange:(unsigned long long)arg1 ;
-(void)animateToStarredState:(BOOL)arg1 ;
-(void)animateFromStatus:(unsigned long long)arg1 toStatus:(unsigned long long)arg2 ;
-(id)statusImageForStatus:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)starImage;
@end

