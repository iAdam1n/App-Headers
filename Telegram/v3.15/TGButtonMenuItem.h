/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/TGMenuItem.h>

@class NSString, UIImage;

@interface TGButtonMenuItem : TGMenuItem {

	BOOL _enabled;
	int _subtype;
	NSString* _title;
	SEL _action;
	UIImage* _titleIcon;

}

@property (nonatomic,retain) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) int subtype;                      //@synthesize subtype=_subtype - In the implementation block
@property (assign,nonatomic) SEL action;                       //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) BOOL enabled;                     //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) UIImage * titleIcon;              //@synthesize titleIcon=_titleIcon - In the implementation block
-(void)setTitleIcon:(UIImage *)arg1 ;
-(id)initWithTitle:(id)arg1 subtype:(int)arg2 ;
-(UIImage *)titleIcon;
-(id)init;
-(BOOL)enabled;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(SEL)action;
-(int)subtype;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setSubtype:(int)arg1 ;
-(void)setAction:(SEL)arg1 ;
@end
