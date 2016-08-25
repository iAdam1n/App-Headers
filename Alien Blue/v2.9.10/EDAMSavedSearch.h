/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, EDAMSavedSearchScope;

@interface EDAMSavedSearch : NSObject <NSCoding> {

	NSString* __guid;
	NSString* __name;
	NSString* __query;
	int __format;
	int __updateSequenceNum;
	EDAMSavedSearchScope* __scope;
	BOOL __guid_isset;
	BOOL __name_isset;
	BOOL __query_isset;
	BOOL __format_isset;
	BOOL __updateSequenceNum_isset;
	BOOL __scope_isset;

}

@property (setter=setGuid:,getter=guid,nonatomic,retain) NSString * guid; 
@property (setter=setName:,getter=name,nonatomic,retain) NSString * name; 
@property (setter=setQuery:,getter=query,nonatomic,retain) NSString * query; 
@property (assign,setter=setFormat:,getter=format,nonatomic) int format; 
@property (assign,setter=setUpdateSequenceNum:,getter=updateSequenceNum,nonatomic) int updateSequenceNum; 
@property (setter=setScope:,getter=scope,nonatomic,retain) EDAMSavedSearchScope * scope; 
-(void)read:(id)arg1 ;
-(void)setUpdateSequenceNum:(int)arg1 ;
-(BOOL)guidIsSet;
-(void)unsetGuid;
-(int)updateSequenceNum;
-(BOOL)updateSequenceNumIsSet;
-(void)unsetUpdateSequenceNum;
-(BOOL)queryIsSet;
-(void)unsetQuery;
-(BOOL)nameIsSet;
-(void)unsetName;
-(id)initWithGuid:(id)arg1 name:(id)arg2 query:(id)arg3 format:(int)arg4 updateSequenceNum:(int)arg5 scope:(id)arg6 ;
-(BOOL)formatIsSet;
-(void)unsetFormat;
-(BOOL)scopeIsSet;
-(void)unsetScope;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)query;
-(void)setQuery:(NSString *)arg1 ;
-(void)setScope:(EDAMSavedSearchScope *)arg1 ;
-(EDAMSavedSearchScope *)scope;
-(NSString *)guid;
-(void)setGuid:(NSString *)arg1 ;
-(int)format;
-(void)setFormat:(int)arg1 ;
-(void)write:(id)arg1 ;
@end

