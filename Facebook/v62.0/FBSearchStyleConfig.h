/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:43 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIColor;


@protocol FBSearchStyleConfig <NSObject>
@property (nonatomic,readonly) BOOL popoverTypeaheadHasAnimation; 
@property (nonatomic,readonly) double popoverTypeaheadAttachmentPointVerticalOffset; 
@property (nonatomic,readonly) UIColor * sectionHeaderBackgroundColor; 
@property (nonatomic,readonly) UIEdgeInsets insets; 
@property (nonatomic,readonly) BOOL showSuggestionSeparator; 
@property (nonatomic,readonly) UIEdgeInsets suggestionTextInsets; 
@property (nonatomic,readonly) FBLayout suggestionSearchIconLayout; 
@property (nonatomic,readonly) FBLayout suggestionNullStateRecentSearchThumbnailLayout; 
@property (nonatomic,readonly) FBLayout suggestionPhotoSnippetLayout; 
@property (nonatomic,readonly) FBLayout suggestionPhotoSkittleLayout; 
@required
-(FBLayout*)suggestionThumbnailLayout:(unsigned long long)arg1;
-(BOOL)popoverTypeaheadHasAnimation;
-(double)popoverTypeaheadAttachmentPointVerticalOffset;
-(BOOL)showSuggestionSeparator;
-(double)suggestionVerifiedBadgeVerticalMargin:(unsigned long long)arg1;
-(UIEdgeInsets)suggestionTextInsets;
-(double)suggestionRowHeight:(unsigned long long)arg1;
-(FBLayout)suggestionNullStateRecentSearchThumbnailLayout;
-(FBLayout*)suggestionGroupIconLayout:(unsigned long long)arg1;
-(FBLayout)suggestionSearchIconLayout;
-(FBLayout)suggestionPhotoSnippetLayout;
-(FBLayout)suggestionPhotoSkittleLayout;
-(UIColor *)sectionHeaderBackgroundColor;
-(UIEdgeInsets)insets;
-(id)initWithSession:(id)arg1;

@end
