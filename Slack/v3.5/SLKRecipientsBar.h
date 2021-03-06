/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UIScrollView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol SLKRecipientsBarDelegate;
@class NSArray, NSMutableArray, SLKRecipient, NSMutableDictionary, NSDictionary, UILabel, UIView, NSString, SLKRecipientField, NSLayoutConstraint, NSAttributedString;

@interface SLKRecipientsBar : UIScrollView <UITextFieldDelegate> {

	NSArray* _updatingConstraints;
	NSMutableArray* _recipients;
	NSMutableArray* _recipientViews;
	CGSize _lastKnownSize;
	SLKRecipient* _selectedRecipient;
	BOOL _needsRecipientLayout;
	NSMutableDictionary* _recipientBackgroundImages;
	NSMutableDictionary* _recipientTitleTextAttributes;
	BOOL _searching;
	BOOL _animatedRecipientsInAndOut;
	NSDictionary* _labelTextAttributes;
	UILabel* _toLabel;
	UIView* _lineView;
	id<SLKRecipientsBarDelegate> _recipientsBarDelegate;
	NSString* _label;
	NSString* _placeholder;
	double _cornerRadius;
	SLKRecipientField* _textField;
	NSLayoutConstraint* _heightConstraint;
	NSDictionary* _summaryTextAttributes;
	NSDictionary* _searchFieldTextAttributes;
	NSDictionary* _placeholderTextAttributes;
	NSAttributedString* _placeholderAttributedString;
	UILabel* _summaryLabel;
	UIEdgeInsets _recipientContentEdgeInsets;

}

@property (nonatomic,retain) UILabel * summaryLabel;                                                 //@synthesize summaryLabel=_summaryLabel - In the implementation block
@property (assign,nonatomic,__weak) id<SLKRecipientsBarDelegate> recipientsBarDelegate;              //@synthesize recipientsBarDelegate=_recipientsBarDelegate - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSString * label;                                                         //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * placeholder;                                                   //@synthesize placeholder=_placeholder - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                                    //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,getter=isSearching,nonatomic) BOOL searching;                                      //@synthesize searching=_searching - In the implementation block
@property (nonatomic,retain) SLKRecipientField * textField;                                          //@synthesize textField=_textField - In the implementation block
@property (nonatomic,readonly) UIView * lineView;                                                    //@synthesize lineView=_lineView - In the implementation block
@property (nonatomic,readonly) UILabel * toLabel;                                                    //@synthesize toLabel=_toLabel - In the implementation block
@property (assign,nonatomic) BOOL animatedRecipientsInAndOut;                                        //@synthesize animatedRecipientsInAndOut=_animatedRecipientsInAndOut - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * heightConstraint;                           //@synthesize heightConstraint=_heightConstraint - In the implementation block
@property (assign,nonatomic) UIEdgeInsets recipientContentEdgeInsets;                                //@synthesize recipientContentEdgeInsets=_recipientContentEdgeInsets - In the implementation block
@property (nonatomic,copy) NSDictionary * labelTextAttributes;                                       //@synthesize labelTextAttributes=_labelTextAttributes - In the implementation block
@property (nonatomic,copy) NSDictionary * summaryTextAttributes;                                     //@synthesize summaryTextAttributes=_summaryTextAttributes - In the implementation block
@property (nonatomic,copy) NSDictionary * searchFieldTextAttributes;                                 //@synthesize searchFieldTextAttributes=_searchFieldTextAttributes - In the implementation block
@property (nonatomic,copy) NSDictionary * placeholderTextAttributes;                                 //@synthesize placeholderTextAttributes=_placeholderTextAttributes - In the implementation block
@property (nonatomic,copy) NSAttributedString * placeholderAttributedString;                         //@synthesize placeholderAttributedString=_placeholderAttributedString - In the implementation block
@property (nonatomic,readonly) NSArray * recipients;                                                 //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,retain) SLKRecipient * selectedRecipient;                                       //@synthesize selectedRecipient=_selectedRecipient - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRecipientsBarDelegate:(id<SLKRecipientsBarDelegate>)arg1 ;
-(void)setSearching:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UILabel *)toLabel;
-(void)deselectRecipients;
-(void)setupRecipientsBackground;
-(void)setNeedsRecipientLayout;
-(id)recipientTitleTextAttributesForState:(unsigned long long)arg1 ;
-(id)recipientBackgroundImageForState:(unsigned long long)arg1 withColor:(id)arg2 ;
-(void)selectRecipientButton:(id)arg1 ;
-(id)recipientBackgroundImageForColor:(id)arg1 ;
-(void)setRecipientBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)updateSummary;
-(id<SLKRecipientsBarDelegate>)recipientsBarDelegate;
-(void)scrollToBottomAnimated:(BOOL)arg1 ;
-(id)viewForRecipient:(id)arg1 ;
-(void)layoutRecipients:(BOOL)arg1 ;
-(BOOL)animatedRecipientsInAndOut;
-(CGRect)frameForRecipientView:(id)arg1 afterView:(id)arg2 ;
-(NSDictionary *)placeholderTextAttributes;
-(void)frameChanged;
-(void)setSelectedRecipient:(SLKRecipient *)arg1 ;
-(SLKRecipient *)selectedRecipient;
-(void)manuallyChangeTextField:(id)arg1 inRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)setRecipientContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setRecipientTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setSearchFieldTextAttributes:(NSDictionary *)arg1 ;
-(void)setPlaceholderTextAttributes:(NSDictionary *)arg1 ;
-(void)setPlaceholderAttributedString:(NSAttributedString *)arg1 ;
-(void)removeAllRecipients;
-(void)setAllRecipientsEnabled:(BOOL)arg1 ;
-(id)recipientsWithIdentifiers:(id)arg1 ;
-(id)recipientWithIdentifier:(id)arg1 ;
-(id)recipientWithName:(id)arg1 ;
-(void)selectRecipient:(id)arg1 ;
-(void)setAnimatedRecipientsInAndOut:(BOOL)arg1 ;
-(UIEdgeInsets)recipientContentEdgeInsets;
-(NSDictionary *)searchFieldTextAttributes;
-(NSAttributedString *)placeholderAttributedString;
-(void)setSummaryLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(BOOL)resignFirstResponder;
-(BOOL)isFirstResponder;
-(BOOL)becomeFirstResponder;
-(void)setCornerRadius:(double)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setTintColor:(id)arg1 ;
-(double)cornerRadius;
-(BOOL)canBecomeFirstResponder;
-(CGSize)intrinsicContentSize;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(BOOL)textFieldShouldEndEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)select:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSLayoutConstraint *)heightConstraint;
-(SLKRecipientField *)textField;
-(NSString *)placeholder;
-(void)commonInit;
-(id)accessibilityHint;
-(unsigned long long)accessibilityTraits;
-(void)setSearching:(BOOL)arg1 ;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setLabelTextAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)labelTextAttributes;
-(BOOL)isSearching;
-(BOOL)containsRecipient:(id)arg1 ;
-(NSArray *)recipients;
-(void)removeRecipient:(id)arg1 ;
-(void)addRecipient:(id)arg1 ;
-(void)addRecipients:(id)arg1 ;
-(void)setTextField:(SLKRecipientField *)arg1 ;
-(UIView *)lineView;
-(UILabel *)summaryLabel;
-(void)setSummaryTextAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)summaryTextAttributes;
@end

