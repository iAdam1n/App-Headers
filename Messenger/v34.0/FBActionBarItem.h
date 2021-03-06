/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:27 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMutableDictionary, NSString, FBButtonBar;

@interface FBActionBarItem : NSObject {

	NSMutableDictionary* _titles;
	NSMutableDictionary* _titleColors;
	NSMutableDictionary* _images;
	BOOL _enabled;
	BOOL _selected;
	BOOL _showsDisclosureIndicator;
	BOOL _showButtonTitles;
	id _target;
	SEL _action;
	id _userInfo;
	NSString* _accessibilityLabel;
	NSString* _accessibilityIdentifier;
	unsigned long long _actionBarButtonType;
	FBButtonBar* _buttonBar;

}

@property (nonatomic,__weak,readonly) id target;                                  //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL action;                                        //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                        //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL selected;                                       //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) BOOL showsDisclosureIndicator;                       //@synthesize showsDisclosureIndicator=_showsDisclosureIndicator - In the implementation block
@property (nonatomic,retain) id userInfo;                                         //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,copy) NSString * accessibilityLabel;                         //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
@property (nonatomic,copy) NSString * accessibilityIdentifier;                    //@synthesize accessibilityIdentifier=_accessibilityIdentifier - In the implementation block
@property (assign,nonatomic) BOOL showButtonTitles;                               //@synthesize showButtonTitles=_showButtonTitles - In the implementation block
@property (assign,nonatomic) unsigned long long actionBarButtonType;              //@synthesize actionBarButtonType=_actionBarButtonType - In the implementation block
@property (assign,nonatomic,__weak) FBButtonBar * buttonBar;                      //@synthesize buttonBar=_buttonBar - In the implementation block
-(void)_informButtonBarOfPropertyChange:(id)arg1 ;
-(void)setShowsDisclosureIndicator:(BOOL)arg1 ;
-(void)enumerateTitlesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateTitleColorsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)showButtonTitles;
-(void)setShowButtonTitles:(BOOL)arg1 ;
-(unsigned long long)actionBarButtonType;
-(void)setActionBarButtonType:(unsigned long long)arg1 ;
-(FBButtonBar *)buttonBar;
-(void)setButtonBar:(FBButtonBar *)arg1 ;
-(void)setTitle:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(SEL)action;
-(void)setUserInfo:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)target;
-(id)userInfo;
-(NSString *)accessibilityIdentifier;
-(NSString *)accessibilityLabel;
-(void)setImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)titleForState:(unsigned long long)arg1 ;
-(void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)imageForState:(unsigned long long)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)enabled;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(id)titleColorForState:(unsigned long long)arg1 ;
-(BOOL)selected;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(void)setAccessibilityIdentifier:(NSString *)arg1 ;
-(BOOL)showsDisclosureIndicator;
-(void)enumerateImagesUsingBlock:(/*^block*/id)arg1 ;
@end

