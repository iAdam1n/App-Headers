/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:32 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSNumber;

@interface FBMessengerEmojiFontRequest : FBGraphQLInput {

	NSNumber* _version;
	NSNumber* _size;

}

@property (nonatomic,copy) NSNumber * version;              //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) NSNumber * size;                 //@synthesize size=_size - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSNumber *)size;
-(void)setSize:(NSNumber *)arg1 ;
-(void)setVersion:(NSNumber *)arg1 ;
-(NSNumber *)version;
@end

