/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WALargeMediaMessageCell.h>

@class WAPlaceInfoView;

@interface WALocationMessageCell : WALargeMediaMessageCell {

	WAPlaceInfoView* _placeInfoView;
	BOOL _hasPlaceInfo;

}
+(BOOL)supportsDoubleTapGesture;
+(UIEdgeInsets)contentInsetsForCellData:(id)arg1 cellWidth:(double)arg2 ;
+(id)cellReuseIdentifier;
+(BOOL)showsHighlightOnTouch;
-(void)configureCellWithAnimation:(BOOL)arg1 ;
-(void)configureForAccessibility;
-(void)updateStarIndicatorAnimated:(BOOL)arg1 ;
-(BOOL)canPerformCopy;
-(void)performCopy;
-(id)registerSubviewsForPreviewingUsingViewController:(id)arg1 previewingDelegate:(id)arg2 ;
-(id)dataForPreviewingContext:(id)arg1 atLocation:(CGPoint)arg2 ;
-(id)accessibilityHintText;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end
