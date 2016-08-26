/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface EDAMunsetNoteApplicationDataEntry_args : NSObject <NSCoding> {

	NSString* __authenticationToken;
	NSString* __guid;
	NSString* __key;
	BOOL __authenticationToken_isset;
	BOOL __guid_isset;
	BOOL __key_isset;

}

@property (setter=setAuthenticationToken:,getter=authenticationToken,nonatomic,retain) NSString * authenticationToken; 
@property (setter=setGuid:,getter=guid,nonatomic,retain) NSString * guid; 
@property (setter=setKey:,getter=key,nonatomic,retain) NSString * key; 
-(void)read:(id)arg1 ;
-(BOOL)keyIsSet;
-(void)unsetKey;
-(BOOL)guidIsSet;
-(void)unsetGuid;
-(BOOL)authenticationTokenIsSet;
-(void)unsetAuthenticationToken;
-(id)initWithAuthenticationToken:(id)arg1 guid:(id)arg2 key:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(NSString *)guid;
-(void)setGuid:(NSString *)arg1 ;
-(void)setAuthenticationToken:(NSString *)arg1 ;
-(NSString *)authenticationToken;
-(void)write:(id)arg1 ;
@end
