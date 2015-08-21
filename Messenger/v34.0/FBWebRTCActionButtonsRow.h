/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:51 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray;

@interface FBWebRTCActionButtonsRow : UIView {

	double _buttonSize;
	double _buttonPadding;
	double _titleLabelsPadding;
	NSMutableArray* _buttons;
	NSMutableArray* _labels;

}
-(void)layoutSubviewsAux;
-(BOOL)addButton:(id)arg1 withLabel:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 buttonSize:(double)arg2 buttonsPadding:(double)arg3 titleLabelsPadding:(double)arg4 ;
-(long long)buttonsCount;
-(void)addSpaceHolderButton;
-(BOOL)setButtonHidden:(BOOL)arg1 atIndex:(long long)arg2 ;
-(BOOL)removeButtonAtIndex:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)intrinsicContentSize;
-(void)removeAll;
-(BOOL)addButton:(id)arg1 ;
@end

