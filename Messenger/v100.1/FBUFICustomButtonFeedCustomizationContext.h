/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:20 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBUFICustomButtonFeedCustomizationContext : NSObject {

	NSString* _title;
	unsigned long long _glyphName;
	NSString* _accessibilityIdentifier;
	/*^block*/id _actionBlock;

}

@property (nonatomic,copy,readonly) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) unsigned long long glyphName;                         //@synthesize glyphName=_glyphName - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessibilityIdentifier;              //@synthesize accessibilityIdentifier=_accessibilityIdentifier - In the implementation block
@property (nonatomic,copy,readonly) id actionBlock;                                  //@synthesize actionBlock=_actionBlock - In the implementation block
-(id)initWithTitle:(id)arg1 glyphName:(unsigned long long)arg2 accessibilityIdentifier:(id)arg3 actionBlock:(/*^block*/id)arg4 ;
-(unsigned long long)glyphName;
-(NSString *)title;
-(NSString *)accessibilityIdentifier;
-(id)actionBlock;
@end
