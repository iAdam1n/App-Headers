/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:06:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/ECBB6493-3CD3-4031-8AE5-B625F29152BF/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface PTHActionItem : NSObject {

	BOOL _enabled;
	NSString* _title;
	/*^block*/id _chosenBlock;
	long long _buttonStyle;
	long long _tag;

}

@property (nonatomic,retain) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) id chosenBlock;                       //@synthesize chosenBlock=_chosenBlock - In the implementation block
@property (assign,nonatomic) long long buttonStyle;              //@synthesize buttonStyle=_buttonStyle - In the implementation block
@property (assign,nonatomic) BOOL enabled;                       //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) long long tag;                      //@synthesize tag=_tag - In the implementation block
+(id)actionItemWithTitle:(id)arg1 chosenBlock:(/*^block*/id)arg2 ;
-(void)setChosenBlock:(id)arg1 ;
-(id)chosenBlock;
-(long long)buttonStyle;
-(void)setButtonStyle:(long long)arg1 ;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSString *)title;
-(void)setEnabled:(BOOL)arg1 ;
-(long long)tag;
-(void)setTag:(long long)arg1 ;
-(BOOL)enabled;
@end

