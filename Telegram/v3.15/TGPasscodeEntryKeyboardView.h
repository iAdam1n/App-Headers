/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:35 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <UIKit/UIView.h>

@protocol TGPasscodeBackground;
@class NSArray;

@interface TGPasscodeEntryKeyboardView : UIView {

	id<TGPasscodeBackground> _background;
	NSArray* _buttonViews;
	/*^block*/id _characterEntered;

}

@property (nonatomic,copy) id characterEntered;              //@synthesize characterEntered=_characterEntered - In the implementation block
-(void)setCharacterEntered:(id)arg1 ;
-(void)_generateButtonViews;
-(id)_buttonViewInfos;
-(void)buttonTouchDown:(id)arg1 ;
-(id)characterEntered;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)sizeToFit;
-(void)setBackground:(id)arg1 ;
-(void)_layoutButtons;
@end
