/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:21 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBComposerGoodwillCampaignAttachment : FBValueObject <NSCopying, NSCoding> {

	NSString* _name;
	NSString* _identifier;
	NSString* _source;
	NSString* _sharingKey;

}

@property (nonatomic,copy,readonly) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * source;                  //@synthesize source=_source - In the implementation block
@property (nonatomic,copy,readonly) NSString * sharingKey;              //@synthesize sharingKey=_sharingKey - In the implementation block
-(id)initWithName:(id)arg1 identifier:(id)arg2 source:(id)arg3 sharingKey:(id)arg4 ;
-(NSString *)sharingKey;
-(NSString *)name;
-(NSString *)identifier;
-(NSString *)source;
@end
