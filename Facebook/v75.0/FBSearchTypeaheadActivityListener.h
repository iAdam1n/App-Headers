/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:02 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSearchTypeaheadActivityListener <NSObject>
@optional
-(void)graphSearchContentWasUpdated;
-(void)graphSearchSuggestionWillAppear:(id)arg1 position:(unsigned long long)arg2;
-(void)graphSearchDidTapOnSuggestion:(id)arg1 position:(unsigned long long)arg2;
-(void)graphSearchDidTapOnRecentSearchEditButtonWithLogFilter:(id)arg1;
-(void)graphSearchExpandableModuleExpandedWithModels:(id)arg1 moduleModel:(id)arg2;
-(void)graphSearchWillOpenSearchResults;
-(void)graphSearchScopedSearchModeChanged:(BOOL)arg1;
-(void)graphSearchRichMediaSuggestionLoadedWithEdges:(id)arg1;
-(void)graphSearchDidPressKey:(long long)arg1;
-(void)graphSearchDidTapOnSuggestionArrowButton:(id)arg1 position:(unsigned long long)arg2;
-(void)graphSearchDidChangeNullStateInputType:(unsigned long long)arg1;
-(void)graphSearchDidChangeTypeaheadInputType:(unsigned long long)arg1;
-(void)graphSearchShouldDelete:(BOOL)arg1 forSuggestion:(id)arg2;
-(void)graphSearchDidRemoveSuggestions:(id)arg1;
-(void)graphSearchDidReloadNullState;
-(void)graphSearchDidTapOnTypeaheadNUXCrossButton;

@end
