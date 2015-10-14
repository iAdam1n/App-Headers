/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:55:57 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/0B7DB34E-BB82-4F37-8A66-6BE47C274E80/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableArray, PTHTweetbotAccount, NSMutableDictionary, NSArray, NSString;

@interface PTHTweetbotAccountSettings : NSObject <NSCoding> {

	NSMutableArray* _statusFilters;
	Class _syncClass;
	BOOL _showMarker;
	BOOL _syncEnabled;
	BOOL _mobilizerEnabled;
	BOOL _syncedStatusFilters;
	int _geoType;
	PTHTweetbotAccount* _account;
	Class _urlShortnerClass;
	Class _bookmarkerClass;
	Class _imageUploaderClass;
	Class _movieUploaderClass;
	Class _mobilizerClass;
	long long _lastSelectedListTID;
	NSMutableDictionary* _dictionary;

}

@property (assign,nonatomic,__weak) PTHTweetbotAccount * account;                                    //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) int geoType;                                                            //@synthesize geoType=_geoType - In the implementation block
@property (assign,setter=setURLShortnerClass:,nonatomic,__weak) Class urlShortnerClass;              //@synthesize urlShortnerClass=_urlShortnerClass - In the implementation block
@property (assign,nonatomic,__weak) Class bookmarkerClass;                                           //@synthesize bookmarkerClass=_bookmarkerClass - In the implementation block
@property (assign,nonatomic,__weak) Class imageUploaderClass;                                        //@synthesize imageUploaderClass=_imageUploaderClass - In the implementation block
@property (assign,nonatomic,__weak) Class movieUploaderClass;                                        //@synthesize movieUploaderClass=_movieUploaderClass - In the implementation block
@property (assign,nonatomic,__weak) Class syncClass; 
@property (assign,nonatomic,__weak) Class mobilizerClass;                                            //@synthesize mobilizerClass=_mobilizerClass - In the implementation block
@property (assign,nonatomic) BOOL showMarker;                                                        //@synthesize showMarker=_showMarker - In the implementation block
@property (getter=isSyncEnabled,nonatomic,readonly) BOOL syncEnabled;                                //@synthesize syncEnabled=_syncEnabled - In the implementation block
@property (assign,getter=isMobilizerEnabled,nonatomic) BOOL mobilizerEnabled;                        //@synthesize mobilizerEnabled=_mobilizerEnabled - In the implementation block
@property (assign,nonatomic) long long lastSelectedListTID;                                          //@synthesize lastSelectedListTID=_lastSelectedListTID - In the implementation block
@property (nonatomic,readonly) NSArray * statusFilters;                                              //@synthesize statusFilters=_statusFilters - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * dictionary;                                       //@synthesize dictionary=_dictionary - In the implementation block
@property (assign,nonatomic) BOOL syncedStatusFilters;                                               //@synthesize syncedStatusFilters=_syncedStatusFilters - In the implementation block
@property (nonatomic,copy,readonly) NSString * syncPublicStatusFiltersKey; 
@property (nonatomic,copy,readonly) NSString * syncPrivateStatusFiltersKey; 
-(BOOL)hasSimilarStatusFilter:(id)arg1 ;
-(void)removeSimilarStatusFilter:(id)arg1 ;
-(void)addStatusFilter:(id)arg1 ;
-(long long)lastSelectedListTID;
-(void)removeStatusFilter:(id)arg1 ;
-(void)setLastSelectedListTID:(long long)arg1 ;
-(NSArray *)statusFilters;
-(Class)urlShortnerClass;
-(Class)imageUploaderClass;
-(Class)movieUploaderClass;
-(Class)bookmarkerClass;
-(Class)syncClass;
-(Class)mobilizerClass;
-(NSString *)syncPublicStatusFiltersKey;
-(void)_replaceStatusFilters:(id)arg1 ;
-(NSString *)syncPrivateStatusFiltersKey;
-(void)_mergeStatusFilters:(id)arg1 ;
-(void)_saveStatusFilters;
-(void)setURLShortnerServiceClass:(Class)arg1 ;
-(void)setBookmarkerClass:(Class)arg1 ;
-(void)setImageUploaderClass:(Class)arg1 ;
-(void)setMovieUploaderClass:(Class)arg1 ;
-(void)setSyncClass:(Class)arg1 ;
-(void)setMobilizerClass:(Class)arg1 ;
-(void)setURLShortnerClass:(Class)arg1 ;
-(BOOL)isSyncEnabled;
-(BOOL)isMobilizerEnabled;
-(void)setMobilizerEnabled:(BOOL)arg1 ;
-(BOOL)syncedStatusFilters;
-(void)setSyncedStatusFilters:(BOOL)arg1 ;
-(void)_setup;
-(void)setDictionary:(NSMutableDictionary *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSMutableDictionary *)dictionary;
-(void)_storeDidChange:(id)arg1 ;
-(void)setGeoType:(int)arg1 ;
-(int)geoType;
-(BOOL)showMarker;
-(void)setShowMarker:(BOOL)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(void)setAccount:(PTHTweetbotAccount *)arg1 ;
-(PTHTweetbotAccount *)account;
@end

