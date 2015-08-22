/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:10 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSCalendar, UILocalizedIndexedCollation, NSDictionary;

@interface FBUserDefaultsCache : NSObject {

	BOOL _dirty;
	BOOL _didUpdateSinceLastForeground;
	unsigned _sortOrder;
	BOOL _abPersonCreationNeeded;
	BOOL _abPersonCreated;
	unsigned _nameFormat;
	NSCalendar* _currentCalendar;
	UILocalizedIndexedCollation* _currentCollation;
	NSDictionary* _localeSummarizeBlackList;
	BOOL _shouldShortenThousands;

}

@property (nonatomic,readonly) unsigned sortOrder; 
@property (nonatomic,readonly) unsigned nameFormat; 
@property (nonatomic,__weak,readonly) NSCalendar * currentCalendar; 
@property (nonatomic,__weak,readonly) UILocalizedIndexedCollation * currentCollation; 
@property (nonatomic,readonly) BOOL shouldShortenThousands; 
+(id)sharedUserDefaultsCache;
-(void)_updateIfDirty;
-(void)updateShouldShortenThousands;
-(void)_onDefaultsDidChange:(id)arg1 ;
-(void)_onCurrentLocaleDidChange:(id)arg1 ;
-(void)updateShouldShortenThousandsForLocale:(id)arg1 ;
-(void)_ensureAbPersonPreferencesWillBeFresh;
-(void)_createABPersonIfNeeded;
-(unsigned)nameFormat;
-(BOOL)shouldShortenThousands;
-(void)dealloc;
-(id)init;
-(unsigned)sortOrder;
-(NSCalendar *)currentCalendar;
-(UILocalizedIndexedCollation *)currentCollation;
-(void)_willEnterForeground:(id)arg1 ;
@end
