/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIColor;

@interface WAContactInfoPageAction : NSObject {

	BOOL _enabled;
	BOOL _destructive;
	NSString* _title;
	SEL _selector;
	id _userInfo;
	UIColor* _textColor;

}

@property (assign,nonatomic) SEL selector;                     //@synthesize selector=_selector - In the implementation block
@property (nonatomic,copy) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL enabled;                     //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL destructive;                 //@synthesize destructive=_destructive - In the implementation block
@property (nonatomic,retain) id userInfo;                      //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) UIColor * textColor;              //@synthesize textColor=_textColor - In the implementation block
+(id)actionWithTitle:(id)arg1 selector:(SEL)arg2 ;
-(id)initWithTitle:(id)arg1 selector:(SEL)arg2 ;
-(BOOL)enabled;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSelector:(SEL)arg1 ;
-(NSString *)title;
-(void)setUserInfo:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)userInfo;
-(void)setTextColor:(UIColor *)arg1 ;
-(SEL)selector;
-(UIColor *)textColor;
-(void)setDestructive:(BOOL)arg1 ;
-(BOOL)destructive;
@end

