/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:17 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, UIImage;

@interface ECIpadMainMenuItemInfo : NSObject {

	NSString* _labelText;
	UIImage* _labelImage;
	SEL _action;
	long long _accessoryType;

}

@property (nonatomic,retain) NSString * labelText;                 //@synthesize labelText=_labelText - In the implementation block
@property (nonatomic,retain) UIImage * labelImage;                 //@synthesize labelImage=_labelImage - In the implementation block
@property (assign,nonatomic) SEL action;                           //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) long long accessoryType;              //@synthesize accessoryType=_accessoryType - In the implementation block
+(id)mainMenuInfoWithLabelText:(id)arg1 image:(id)arg2 action:(SEL)arg3 ;
-(id)initWithLabelText:(id)arg1 image:(id)arg2 action:(SEL)arg3 ;
-(UIImage *)labelImage;
-(void)setLabelImage:(UIImage *)arg1 ;
-(SEL)action;
-(void)setAction:(SEL)arg1 ;
-(long long)accessoryType;
-(void)setAccessoryType:(long long)arg1 ;
-(NSString *)labelText;
-(void)setLabelText:(NSString *)arg1 ;
@end
