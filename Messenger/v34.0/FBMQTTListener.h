/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:39 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface FBMQTTListener : NSObject {

	BOOL _listensOnlyOnce;
	NSString* _pattern;
	/*^block*/id _jsonMessageBlock;
	/*^block*/id _encodedMessageBlock;
	unsigned long long _backgroundPolicy;
	NSString* _identifier;

}

@property (nonatomic,copy) NSString * pattern;                                 //@synthesize pattern=_pattern - In the implementation block
@property (assign,nonatomic) BOOL listensOnlyOnce;                             //@synthesize listensOnlyOnce=_listensOnlyOnce - In the implementation block
@property (nonatomic,copy) id jsonMessageBlock;                                //@synthesize jsonMessageBlock=_jsonMessageBlock - In the implementation block
@property (nonatomic,copy) id encodedMessageBlock;                             //@synthesize encodedMessageBlock=_encodedMessageBlock - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundPolicy;              //@synthesize backgroundPolicy=_backgroundPolicy - In the implementation block
@property (nonatomic,copy) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
+(id)listenerWithPattern:(id)arg1 listensOnlyOnce:(BOOL)arg2 backgroundPolicy:(unsigned long long)arg3 ;
-(void)setListensOnlyOnce:(BOOL)arg1 ;
-(void)setBackgroundPolicy:(unsigned long long)arg1 ;
-(BOOL)listensOnlyOnce;
-(id)jsonMessageBlock;
-(void)setJsonMessageBlock:(id)arg1 ;
-(id)encodedMessageBlock;
-(void)setEncodedMessageBlock:(id)arg1 ;
-(unsigned long long)backgroundPolicy;
-(void)dealloc;
-(id)description;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)pattern;
-(void)setPattern:(NSString *)arg1 ;
@end

