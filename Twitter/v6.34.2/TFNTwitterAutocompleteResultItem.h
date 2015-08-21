/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:42 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNAutocompleteResultItem.h>

@class NSString, TFNTwitterTypeaheadUser;

@interface TFNTwitterAutocompleteResultItem : NSObject <TFNAutocompleteResultItem> {

	NSString* autocompleteDisplayText;
	NSString* autocompleteSubtext;
	NSString* autocompleteImageName;
	NSString* autocompleteImageURL;
	id userInfo;
	long long autocompleteType;
	long long priority;
	NSString* _derivedSearchableText;
	BOOL isNotSelectable;
	BOOL _isPrefetchUser;
	NSString* autocompleteDisplaySubtext;
	NSString* autocompleteReplacementText;
	NSString* itemID;
	TFNTwitterTypeaheadUser* typeaheadUser;
	NSString* notSelectableText;
	long long _autocompleteAction;

}

@property (nonatomic,copy) NSString * autocompleteDisplayText; 
@property (nonatomic,copy) NSString * autocompleteDisplaySubtext; 
@property (nonatomic,copy) NSString * autocompleteImageName; 
@property (nonatomic,copy) NSString * autocompleteImageURL; 
@property (nonatomic,retain) id userInfo; 
@property (nonatomic,copy) NSString * itemID; 
@property (assign,nonatomic) long long autocompleteAction;                         //@synthesize autocompleteAction=_autocompleteAction - In the implementation block
@property (assign,nonatomic) long long autocompleteType; 
@property (assign,nonatomic) long long priority; 
@property (assign,nonatomic) BOOL isPrefetchUser;                                  //@synthesize isPrefetchUser=_isPrefetchUser - In the implementation block
@property (nonatomic,retain) TFNTwitterTypeaheadUser * typeaheadUser; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * autocompleteReplacementText; 
@property (assign,nonatomic) BOOL isNotSelectable; 
@property (nonatomic,copy) NSString * notSelectableText; 
-(long long)autocompleteType;
-(void)setAutocompleteType:(long long)arg1 ;
-(NSString *)autocompleteDisplayText;
-(NSString *)autocompleteDisplaySubtext;
-(NSString *)autocompleteImageURL;
-(TFNTwitterTypeaheadUser *)typeaheadUser;
-(NSString *)autocompleteReplacementText;
-(void)setIsNotSelectable:(BOOL)arg1 ;
-(void)setNotSelectableText:(NSString *)arg1 ;
-(void)setAutocompleteDisplayText:(NSString *)arg1 ;
-(void)setAutocompleteReplacementText:(NSString *)arg1 ;
-(void)setAutocompleteDisplaySubtext:(NSString *)arg1 ;
-(void)setAutocompleteImageURL:(NSString *)arg1 ;
-(BOOL)isNotSelectable;
-(NSString *)notSelectableText;
-(NSString *)autocompleteImageName;
-(id)searchableSortableText;
-(BOOL)isPrefetchUser;
-(void)setAutocompleteImageName:(NSString *)arg1 ;
-(void)setIsPrefetchUser:(BOOL)arg1 ;
-(void)setTypeaheadUser:(TFNTwitterTypeaheadUser *)arg1 ;
-(long long)autocompleteAction;
-(void)setAutocompleteAction:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setUserInfo:(id)arg1 ;
-(id)userInfo;
-(void)setPriority:(long long)arg1 ;
-(long long)priority;
-(NSString *)itemID;
-(void)setItemID:(NSString *)arg1 ;
-(BOOL)verified;
@end

