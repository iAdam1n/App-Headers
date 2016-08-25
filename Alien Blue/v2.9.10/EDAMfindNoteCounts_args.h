/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, EDAMNoteFilter;

@interface EDAMfindNoteCounts_args : NSObject <NSCoding> {

	NSString* __authenticationToken;
	EDAMNoteFilter* __filter;
	BOOL __withTrash;
	BOOL __authenticationToken_isset;
	BOOL __filter_isset;
	BOOL __withTrash_isset;

}

@property (setter=setAuthenticationToken:,getter=authenticationToken,nonatomic,retain) NSString * authenticationToken; 
@property (setter=setFilter:,getter=filter,nonatomic,retain) EDAMNoteFilter * filter; 
@property (assign,setter=setWithTrash:,getter=withTrash,nonatomic) BOOL withTrash; 
-(void)read:(id)arg1 ;
-(BOOL)filterIsSet;
-(void)unsetFilter;
-(BOOL)authenticationTokenIsSet;
-(void)unsetAuthenticationToken;
-(void)setWithTrash:(BOOL)arg1 ;
-(id)initWithAuthenticationToken:(id)arg1 filter:(id)arg2 withTrash:(BOOL)arg3 ;
-(BOOL)withTrash;
-(BOOL)withTrashIsSet;
-(void)unsetWithTrash;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setFilter:(EDAMNoteFilter *)arg1 ;
-(EDAMNoteFilter *)filter;
-(void)setAuthenticationToken:(NSString *)arg1 ;
-(NSString *)authenticationToken;
-(void)write:(id)arg1 ;
@end

