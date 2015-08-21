/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:06:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/ECBB6493-3CD3-4031-8AE5-B625F29152BF/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <Tweetbot/PTHAttributedLabel.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol PTHTweetbotEntityTextLabelDelegate;
@class UILongPressGestureRecognizer, PTHTweetbotEntity, UIFont, UIColor, NSString;

@interface PTHTweetbotEntityTextLabel : PTHAttributedLabel <UIGestureRecognizerDelegate> {

	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	BOOL _addedTouchUpTarget;
	CTFontRef _ctFont;
	CTFontRef _linkCTFont;
	CTFontRef _hashtagCTFont;
	CTFontRef _stockCTFont;
	CTFontRef _mentionCTFont;
	CTFontRef _placeCTFont;
	BOOL _selectedPlace;
	BOOL _ignoresBackgroundTouch;
	BOOL _ignoresPlaceTouch;
	PTHTweetbotEntity* _selectedEntity;
	UIFont* _textFont;
	UIFont* _linkFont;
	UIColor* _linkColor;
	UIColor* _linkSelectedColor;
	UIFont* _mentionFont;
	UIColor* _mentionColor;
	UIColor* _mentionSelectedColor;
	UIFont* _hashtagFont;
	UIColor* _hashtagColor;
	UIColor* _hashtagSelectedColor;
	UIFont* _stockFont;
	UIColor* _stockColor;
	UIColor* _stockSelectedColor;
	UIFont* _placeFont;
	UIColor* _placeColor;
	UIColor* _placeSelectedColor;
	NSString* _colorGroupName;
	id<PTHTweetbotEntityTextLabelDelegate> _delegate;

}

@property (nonatomic,retain) PTHTweetbotEntity * selectedEntity;                                  //@synthesize selectedEntity=_selectedEntity - In the implementation block
@property (assign,nonatomic) BOOL selectedPlace;                                                  //@synthesize selectedPlace=_selectedPlace - In the implementation block
@property (assign,nonatomic) BOOL ignoresBackgroundTouch;                                         //@synthesize ignoresBackgroundTouch=_ignoresBackgroundTouch - In the implementation block
@property (assign,nonatomic) BOOL ignoresPlaceTouch;                                              //@synthesize ignoresPlaceTouch=_ignoresPlaceTouch - In the implementation block
@property (nonatomic,retain) UIFont * textFont;                                                   //@synthesize textFont=_textFont - In the implementation block
@property (nonatomic,retain) UIFont * linkFont;                                                   //@synthesize linkFont=_linkFont - In the implementation block
@property (nonatomic,retain) UIColor * linkColor;                                                 //@synthesize linkColor=_linkColor - In the implementation block
@property (nonatomic,retain) UIColor * linkSelectedColor;                                         //@synthesize linkSelectedColor=_linkSelectedColor - In the implementation block
@property (nonatomic,retain) UIFont * mentionFont;                                                //@synthesize mentionFont=_mentionFont - In the implementation block
@property (nonatomic,retain) UIColor * mentionColor;                                              //@synthesize mentionColor=_mentionColor - In the implementation block
@property (nonatomic,retain) UIColor * mentionSelectedColor;                                      //@synthesize mentionSelectedColor=_mentionSelectedColor - In the implementation block
@property (nonatomic,retain) UIFont * hashtagFont;                                                //@synthesize hashtagFont=_hashtagFont - In the implementation block
@property (nonatomic,retain) UIColor * hashtagColor;                                              //@synthesize hashtagColor=_hashtagColor - In the implementation block
@property (nonatomic,retain) UIColor * hashtagSelectedColor;                                      //@synthesize hashtagSelectedColor=_hashtagSelectedColor - In the implementation block
@property (nonatomic,retain) UIFont * stockFont;                                                  //@synthesize stockFont=_stockFont - In the implementation block
@property (nonatomic,retain) UIColor * stockColor;                                                //@synthesize stockColor=_stockColor - In the implementation block
@property (nonatomic,retain) UIColor * stockSelectedColor;                                        //@synthesize stockSelectedColor=_stockSelectedColor - In the implementation block
@property (nonatomic,retain) UIFont * placeFont;                                                  //@synthesize placeFont=_placeFont - In the implementation block
@property (nonatomic,retain) UIColor * placeColor;                                                //@synthesize placeColor=_placeColor - In the implementation block
@property (nonatomic,retain) UIColor * placeSelectedColor;                                        //@synthesize placeSelectedColor=_placeSelectedColor - In the implementation block
@property (nonatomic,copy) NSString * colorGroupName;                                             //@synthesize colorGroupName=_colorGroupName - In the implementation block
@property (assign,nonatomic,__weak) id<PTHTweetbotEntityTextLabelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setColorGroupName:(NSString *)arg1 ;
-(NSString *)colorGroupName;
-(void)setSelectedEntity:(PTHTweetbotEntity *)arg1 ;
-(void)colorThemeDidChange;
-(PTHTweetbotEntity *)selectedEntity;
-(void)setPlaceFont:(UIFont *)arg1 ;
-(UIFont *)placeFont;
-(void)setMentionColor:(UIColor *)arg1 ;
-(void)setHashtagColor:(UIColor *)arg1 ;
-(void)setPlaceColor:(UIColor *)arg1 ;
-(UIColor *)hashtagColor;
-(void)setStockColor:(UIColor *)arg1 ;
-(UIColor *)mentionColor;
-(UIColor *)placeColor;
-(UIColor *)stockColor;
-(BOOL)ignoresPlaceTouch;
-(void)setIgnoresPlaceTouch:(BOOL)arg1 ;
-(void)setIgnoresBackgroundTouch:(BOOL)arg1 ;
-(void)setTextFont:(UIFont *)arg1 ;
-(void)setLinkFont:(UIFont *)arg1 ;
-(void)setMentionFont:(UIFont *)arg1 ;
-(void)setHashtagFont:(UIFont *)arg1 ;
-(void)setLinkSelectedColor:(UIColor *)arg1 ;
-(void)setMentionSelectedColor:(UIColor *)arg1 ;
-(void)setHashtagSelectedColor:(UIColor *)arg1 ;
-(void)setStockSelectedColor:(UIColor *)arg1 ;
-(void)setPlaceSelectedColor:(UIColor *)arg1 ;
-(void)_touchUp:(id)arg1 event:(id)arg2 ;
-(void)setStockFont:(UIFont *)arg1 ;
-(id)newDisplayText;
-(BOOL)selectedPlace;
-(BOOL)ignoresBackgroundTouch;
-(UIFont *)linkFont;
-(UIColor *)linkSelectedColor;
-(UIFont *)mentionFont;
-(UIColor *)mentionSelectedColor;
-(UIFont *)hashtagFont;
-(UIColor *)hashtagSelectedColor;
-(UIFont *)stockFont;
-(UIColor *)stockSelectedColor;
-(UIColor *)placeSelectedColor;
-(void)_longPress:(id)arg1 ;
-(void)setSelectedPlace:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<PTHTweetbotEntityTextLabelDelegate>)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id<PTHTweetbotEntityTextLabelDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setFont:(id)arg1 ;
-(UIFont *)textFont;
-(UIColor *)linkColor;
-(void)setLinkColor:(UIColor *)arg1 ;
@end
