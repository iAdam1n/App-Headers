/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:53 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol FBSearchTypeaheadActivityListener <NSObject>
@optional
-(void)graphSearchContentWasUpdated;
-(void)graphSearchCustomContentWasUpdatedWithResultsSesionId:(id)arg1 didReceivedProfilePivots:(BOOL)arg2;
-(void)graphSearchSuggestionWillAppear:(id)arg1 position:(unsigned long long)arg2;
-(void)graphSearchDidTapOnSuggestion:(id)arg1 position:(unsigned long long)arg2;
-(void)graphSearchDidTapOnRecentSearchEditButton;
-(void)graphSearchDidTapOnSuggestedSearchAboutButton;
-(void)graphSearchNullStateRecentSearchesExpandedWithModels:(id)arg1;
-(void)graphSearchWillOpenSearchResults;
-(void)graphSearchKeyboardWillAppear;
-(void)graphSearchScopedSearchModeChanged:(BOOL)arg1;

@end

