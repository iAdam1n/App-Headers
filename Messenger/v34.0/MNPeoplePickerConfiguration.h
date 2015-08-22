/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:42 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>

@class NSArray;

@interface MNPeoplePickerConfiguration : FBValueObject <NSCopying> {

	BOOL _enableGroupSearch;
	BOOL _enableCommerceSearch;
	BOOL _showAlreadyLeftGroups;
	BOOL _singlePickMode;
	BOOL _enableServerSearch;
	NSArray* _pickedUsers;
	NSArray* _excludedUserIds;
	NSArray* _excludedThreadsFbIds;
	NSArray* _permanentPickedUserIds;
	unsigned long long _maxUserSelection;

}

@property (nonatomic,copy,readonly) NSArray * pickedUsers;                         //@synthesize pickedUsers=_pickedUsers - In the implementation block
@property (nonatomic,copy,readonly) NSArray * excludedUserIds;                     //@synthesize excludedUserIds=_excludedUserIds - In the implementation block
@property (nonatomic,copy,readonly) NSArray * excludedThreadsFbIds;                //@synthesize excludedThreadsFbIds=_excludedThreadsFbIds - In the implementation block
@property (nonatomic,copy,readonly) NSArray * permanentPickedUserIds;              //@synthesize permanentPickedUserIds=_permanentPickedUserIds - In the implementation block
@property (nonatomic,readonly) BOOL enableGroupSearch;                             //@synthesize enableGroupSearch=_enableGroupSearch - In the implementation block
@property (nonatomic,readonly) BOOL enableCommerceSearch;                          //@synthesize enableCommerceSearch=_enableCommerceSearch - In the implementation block
@property (nonatomic,readonly) BOOL showAlreadyLeftGroups;                         //@synthesize showAlreadyLeftGroups=_showAlreadyLeftGroups - In the implementation block
@property (nonatomic,readonly) BOOL singlePickMode;                                //@synthesize singlePickMode=_singlePickMode - In the implementation block
@property (nonatomic,readonly) BOOL enableServerSearch;                            //@synthesize enableServerSearch=_enableServerSearch - In the implementation block
@property (nonatomic,readonly) unsigned long long maxUserSelection;                //@synthesize maxUserSelection=_maxUserSelection - In the implementation block
-(id)initWithPickedUsers:(id)arg1 excludedUserIds:(id)arg2 excludedThreadsFbIds:(id)arg3 permanentPickedUserIds:(id)arg4 enableGroupSearch:(BOOL)arg5 enableCommerceSearch:(BOOL)arg6 showAlreadyLeftGroups:(BOOL)arg7 singlePickMode:(BOOL)arg8 enableServerSearch:(BOOL)arg9 maxUserSelection:(unsigned long long)arg10 ;
-(unsigned long long)maxUserSelection;
-(NSArray *)pickedUsers;
-(NSArray *)excludedUserIds;
-(BOOL)singlePickMode;
-(BOOL)enableGroupSearch;
-(BOOL)enableCommerceSearch;
-(BOOL)enableServerSearch;
-(NSArray *)permanentPickedUserIds;
-(NSArray *)excludedThreadsFbIds;
-(BOOL)showAlreadyLeftGroups;
@end
