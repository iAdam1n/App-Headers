/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface EDAMgetSyncChunk_args : NSObject <NSCoding> {

	NSString* __authenticationToken;
	int __afterUSN;
	int __maxEntries;
	BOOL __fullSyncOnly;
	BOOL __authenticationToken_isset;
	BOOL __afterUSN_isset;
	BOOL __maxEntries_isset;
	BOOL __fullSyncOnly_isset;

}

@property (setter=setAuthenticationToken:,getter=authenticationToken,nonatomic,retain) NSString * authenticationToken; 
@property (assign,setter=setAfterUSN:,getter=afterUSN,nonatomic) int afterUSN; 
@property (assign,setter=setMaxEntries:,getter=maxEntries,nonatomic) int maxEntries; 
@property (assign,setter=setFullSyncOnly:,getter=fullSyncOnly,nonatomic) BOOL fullSyncOnly; 
-(void)read:(id)arg1 ;
-(BOOL)authenticationTokenIsSet;
-(void)unsetAuthenticationToken;
-(void)setAfterUSN:(int)arg1 ;
-(void)setMaxEntries:(int)arg1 ;
-(void)setFullSyncOnly:(BOOL)arg1 ;
-(id)initWithAuthenticationToken:(id)arg1 afterUSN:(int)arg2 maxEntries:(int)arg3 fullSyncOnly:(BOOL)arg4 ;
-(int)afterUSN;
-(BOOL)afterUSNIsSet;
-(void)unsetAfterUSN;
-(int)maxEntries;
-(BOOL)maxEntriesIsSet;
-(void)unsetMaxEntries;
-(BOOL)fullSyncOnly;
-(BOOL)fullSyncOnlyIsSet;
-(void)unsetFullSyncOnly;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setAuthenticationToken:(NSString *)arg1 ;
-(NSString *)authenticationToken;
-(void)write:(id)arg1 ;
@end

