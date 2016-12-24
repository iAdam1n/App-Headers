/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:40 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/MKAlertView.h>

@class MKAppBarLayer, CALayer, MKAppBar, MKActionSheetStylesheet;

@interface MKActionSheet : MKAlertView {

	MKAppBarLayer* _headerLayer;
	CALayer* _bgActionSheetLayer;
	MKAppBar* _appBar;
	MKActionSheetStylesheet* _stylesheet;

}

@property (nonatomic,retain) MKAppBarLayer * headerLayer;                       //@synthesize headerLayer=_headerLayer - In the implementation block
@property (nonatomic,retain) CALayer * bgActionSheetLayer;                      //@synthesize bgActionSheetLayer=_bgActionSheetLayer - In the implementation block
@property (nonatomic,retain) MKAppBar * appBar;                                 //@synthesize appBar=_appBar - In the implementation block
@property (nonatomic,retain) MKActionSheetStylesheet * stylesheet;              //@synthesize stylesheet=_stylesheet - In the implementation block
+(id)actionSheetWithTitle:(id)arg1 message:(id)arg2 ;
+(id)currentVisibleActionSheet;
-(void)mk_commonInit;
-(id)buttonWithTitle:(id)arg1 positive:(BOOL)arg2 ;
-(void)showAnimation:(BOOL)arg1 buttonIndex:(long long)arg2 ;
-(void)didTouchBackgroundLayer:(id)arg1 ;
-(BOOL)shouldAddSeparatorLineForButtonAtIndex:(unsigned long long)arg1 ;
-(double)widthContainer;
-(void)setHeaderLayer:(MKAppBarLayer *)arg1 ;
-(MKAppBarLayer *)headerLayer;
-(void)setBgActionSheetLayer:(CALayer *)arg1 ;
-(CALayer *)bgActionSheetLayer;
-(MKAppBar *)appBar;
-(void)setAppBar:(MKAppBar *)arg1 ;
-(void)showFromAppBar:(id)arg1 ;
-(void)dismissWithClickedButtonIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(double)width;
-(MKActionSheetStylesheet *)stylesheet;
-(void)setStylesheet:(MKActionSheetStylesheet *)arg1 ;
@end
