/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface TGAttachmentSheetItemView : UIView {

	UIView* _topSeparatorView;
	UIView* _bottomSeparatorView;
	BOOL _showsTopSeparator;
	BOOL _showsBottomSeparator;

}

@property (assign,nonatomic) BOOL showsTopSeparator;                 //@synthesize showsTopSeparator=_showsTopSeparator - In the implementation block
@property (assign,nonatomic) BOOL showsBottomSeparator;              //@synthesize showsBottomSeparator=_showsBottomSeparator - In the implementation block
-(BOOL)wantsFullSeparator;
-(void)sheetDidAppear;
-(void)sheetWillDisappear;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(double)preferredHeight;
-(void)setShowsBottomSeparator:(BOOL)arg1 ;
-(void)setShowsTopSeparator:(BOOL)arg1 ;
-(BOOL)showsBottomSeparator;
-(BOOL)showsTopSeparator;
@end
