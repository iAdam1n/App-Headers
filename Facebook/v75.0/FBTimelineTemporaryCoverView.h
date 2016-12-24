/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:03 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIImageView.h>

@class FBTimelineCoverInstructionLabel;

@interface FBTimelineTemporaryCoverView : UIImageView {

	CGPoint _lastLocation;
	FBTimelineCoverInstructionLabel* _instructionView;
	CGPoint _focus;
	BOOL _hideInstructionLabel;
	int _instructionLabelVerticalPosition;

}

@property (assign,nonatomic) BOOL hideInstructionLabel;                         //@synthesize hideInstructionLabel=_hideInstructionLabel - In the implementation block
@property (assign,nonatomic) int instructionLabelVerticalPosition;              //@synthesize instructionLabelVerticalPosition=_instructionLabelVerticalPosition - In the implementation block
-(void)setFocusForImage:(CGPoint)arg1 ;
-(void)setHideInstructionLabel:(BOOL)arg1 ;
-(void)_updateCoverPhotoCrop;
-(void)setInstructionLabelVerticalPosition:(int)arg1 ;
-(void)_updateInstructionLabelVisiblity;
-(BOOL)hideInstructionLabel;
-(id)initWithFrame:(CGRect)arg1 instructionLabelVerticalPosition:(int)arg2 ;
-(int)instructionLabelVerticalPosition;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setImage:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
@end
