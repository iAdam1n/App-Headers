/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:59 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/FBCacheDescriptor.h>
#import <Gumtree/FBGraphObjectPagingLoaderDelegate.h>

@class NSSet, NSString, FBGraphObjectPagingLoader;

@interface FBFriendPickerCacheDescriptor : FBCacheDescriptor <FBGraphObjectPagingLoaderDelegate> {

	BOOL _hasCompletedFetch;
	BOOL _usePageLimitOfOne;
	NSSet* _fieldsForRequest;
	NSString* _userID;
	FBGraphObjectPagingLoader* _loader;

}

@property (nonatomic,copy) NSSet * fieldsForRequest;                          //@synthesize fieldsForRequest=_fieldsForRequest - In the implementation block
@property (nonatomic,copy) NSString * userID;                                 //@synthesize userID=_userID - In the implementation block
@property (nonatomic,retain) FBGraphObjectPagingLoader * loader;              //@synthesize loader=_loader - In the implementation block
@property (assign,nonatomic) BOOL hasCompletedFetch;                          //@synthesize hasCompletedFetch=_hasCompletedFetch - In the implementation block
@property (assign,nonatomic) BOOL usePageLimitOfOne;                          //@synthesize usePageLimitOfOne=_usePageLimitOfOne - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUserID:(NSString *)arg1 ;
-(void)prefetchAndCacheForSession:(id)arg1 ;
-(id)initWithUserID:(id)arg1 fieldsForRequest:(id)arg2 ;
-(void)setFieldsForRequest:(NSSet *)arg1 ;
-(void)setHasCompletedFetch:(BOOL)arg1 ;
-(void)setUsePageLimitOfOne:(BOOL)arg1 ;
-(NSSet *)fieldsForRequest;
-(BOOL)usePageLimitOfOne;
-(void)pagingLoaderDidFinishLoading:(id)arg1 ;
-(id)initWithUserID:(id)arg1 ;
-(id)initWithFieldsForRequest:(id)arg1 ;
-(void)setUsePageLimitOfOne;
-(BOOL)hasCompletedFetch;
-(void)dealloc;
-(id)init;
-(void)setLoader:(FBGraphObjectPagingLoader *)arg1 ;
-(NSString *)userID;
-(FBGraphObjectPagingLoader *)loader;
@end

