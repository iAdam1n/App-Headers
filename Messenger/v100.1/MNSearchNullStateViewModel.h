/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNSearchNullStateUserSectionsViewModel, MNSearchNullStateGroupSectionViewModel, MNSearchNullStateBusinessSectionViewModel, MNSearchNullStateBotsSectionViewModel, MNSearchNullStateRecentSearchSectionsViewModel;

@interface MNSearchNullStateViewModel : FBValueObject <NSCopying> {

	MNSearchNullStateUserSectionsViewModel* _userViewModel;
	MNSearchNullStateGroupSectionViewModel* _groupViewModel;
	MNSearchNullStateBusinessSectionViewModel* _businessViewModel;
	MNSearchNullStateBotsSectionViewModel* _botsViewModel;
	MNSearchNullStateRecentSearchSectionsViewModel* _recentSearchViewModel;

}

@property (nonatomic,copy,readonly) MNSearchNullStateUserSectionsViewModel * userViewModel;                              //@synthesize userViewModel=_userViewModel - In the implementation block
@property (nonatomic,copy,readonly) MNSearchNullStateGroupSectionViewModel * groupViewModel;                             //@synthesize groupViewModel=_groupViewModel - In the implementation block
@property (nonatomic,copy,readonly) MNSearchNullStateBusinessSectionViewModel * businessViewModel;                       //@synthesize businessViewModel=_businessViewModel - In the implementation block
@property (nonatomic,copy,readonly) MNSearchNullStateBotsSectionViewModel * botsViewModel;                               //@synthesize botsViewModel=_botsViewModel - In the implementation block
@property (nonatomic,copy,readonly) MNSearchNullStateRecentSearchSectionsViewModel * recentSearchViewModel;              //@synthesize recentSearchViewModel=_recentSearchViewModel - In the implementation block
-(MNSearchNullStateUserSectionsViewModel *)userViewModel;
-(MNSearchNullStateRecentSearchSectionsViewModel *)recentSearchViewModel;
-(MNSearchNullStateBusinessSectionViewModel *)businessViewModel;
-(MNSearchNullStateGroupSectionViewModel *)groupViewModel;
-(MNSearchNullStateBotsSectionViewModel *)botsViewModel;
-(id)initWithUserViewModel:(id)arg1 groupViewModel:(id)arg2 businessViewModel:(id)arg3 botsViewModel:(id)arg4 recentSearchViewModel:(id)arg5 ;
@end
