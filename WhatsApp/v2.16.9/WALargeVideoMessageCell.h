/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:04 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WALargeMediaMessageCell.h>

@class WAMediaPlayerPlayButtonView;

@interface WALargeVideoMessageCell : WALargeMediaMessageCell {

	WAMediaPlayerPlayButtonView* _playButtonView;

}
+(id)cellReuseIdentifier;
-(BOOL)canPerformCopy;
-(void)performCopy;
-(void)setProgressViewHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(unsigned long long)accessibilityTraits;
@end
