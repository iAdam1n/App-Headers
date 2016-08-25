/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface EDAMauthenticateToSharedNote_args : NSObject <NSCoding> {

	NSString* __guid;
	NSString* __noteKey;
	NSString* __authenticationToken;
	BOOL __guid_isset;
	BOOL __noteKey_isset;
	BOOL __authenticationToken_isset;

}

@property (setter=setGuid:,getter=guid,nonatomic,retain) NSString * guid; 
@property (setter=setNoteKey:,getter=noteKey,nonatomic,retain) NSString * noteKey; 
@property (setter=setAuthenticationToken:,getter=authenticationToken,nonatomic,retain) NSString * authenticationToken; 
-(void)read:(id)arg1 ;
-(BOOL)guidIsSet;
-(void)unsetGuid;
-(BOOL)authenticationTokenIsSet;
-(void)unsetAuthenticationToken;
-(void)setNoteKey:(NSString *)arg1 ;
-(id)initWithGuid:(id)arg1 noteKey:(id)arg2 authenticationToken:(id)arg3 ;
-(NSString *)noteKey;
-(BOOL)noteKeyIsSet;
-(void)unsetNoteKey;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(NSString *)guid;
-(void)setGuid:(NSString *)arg1 ;
-(void)setAuthenticationToken:(NSString *)arg1 ;
-(NSString *)authenticationToken;
-(void)write:(id)arg1 ;
@end

