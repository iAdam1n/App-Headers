/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:11 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface FBMenuButtonItem : NSObject {

	NSString* _title;
	/*^block*/id _action;

}

@property (nonatomic,copy) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) id action;                     //@synthesize action=_action - In the implementation block
+(id)buttonItemWithTitle:(id)arg1 action:(/*^block*/id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)action;
-(NSString *)title;
-(void)setAction:(id)arg1 ;
@end

