/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSData, NSString;

@interface MNSecureMessagingPublicKeyWithID : NSObject <TBase, NSCoding> {

	NSData* __public_key;
	int __id;
	BOOL __public_key_isset;
	BOOL __id_isset;

}

@property (setter=setPublic_key:,getter=public_key,nonatomic,retain) NSData * public_key; 
@property (assign,setter=setId:,getter=id,nonatomic) int id; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(BOOL)idIsSet;
-(void)unsetId;
-(void)setPublic_key:(NSData *)arg1 ;
-(id)initWithPublic_key:(id)arg1 id:(int)arg2 ;
-(NSData *)public_key;
-(BOOL)public_keyIsSet;
-(void)unsetPublic_key;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(void)validate;
-(void)write:(id)arg1 ;
-(int)id;
-(void)setId:(int)arg1 ;
@end
