/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <UIKit/UIControl.h>
#import <Gumtree/ECAccessibilityProtocol.h>

@class NSString, NSDictionary, NSArray, UIColor, NSMutableArray, CALayer, NSMutableDictionary, UIAccessibilityElement;

@interface ECCollapsingEnumView : UIControl <ECAccessibilityProtocol> {

	BOOL _alwaysCollapsed;
	BOOL _collapsed;
	NSString* _anyChoiceText;
	unsigned long long _anyMode;
	/*^block*/id _collapsedStateChangedHandler;
	NSDictionary* _displayLabelMap;
	NSArray* _identifiers;
	double _segmentCornerRadius;
	long long _selectedSegmentIndex;
	long long _lastSelectedIndex;
	UIColor* _selectionColor;
	UIColor* _separatorColor;
	/*^block*/id _valueChangedHandler;
	NSMutableArray* _accessibilityElements;
	NSArray* _frames;
	NSMutableArray* _items;
	NSMutableArray* _segmentLayers;
	CALayer* _selectionIndicatorLayer;
	NSMutableArray* _separatorLayers;
	NSMutableDictionary* _titleTextAttributes;
	UIAccessibilityElement* _lastAccessibilityElementSelected;
	UIEdgeInsets _segmentInsets;
	UIEdgeInsets _separatorInsets;

}

@property (assign,nonatomic) unsigned long long anyMode;                                             //@synthesize anyMode=_anyMode - In the implementation block
@property (nonatomic,retain) NSMutableArray * accessibilityElements;                                 //@synthesize accessibilityElements=_accessibilityElements - In the implementation block
@property (nonatomic,copy) NSDictionary * displayLabelMap;                                           //@synthesize displayLabelMap=_displayLabelMap - In the implementation block
@property (nonatomic,retain) NSArray * frames;                                                       //@synthesize frames=_frames - In the implementation block
@property (nonatomic,copy) NSArray * identifiers;                                                    //@synthesize identifiers=_identifiers - In the implementation block
@property (nonatomic,retain) NSMutableArray * items;                                                 //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSMutableArray * segmentLayers;                                         //@synthesize segmentLayers=_segmentLayers - In the implementation block
@property (nonatomic,retain) CALayer * selectionIndicatorLayer;                                      //@synthesize selectionIndicatorLayer=_selectionIndicatorLayer - In the implementation block
@property (nonatomic,retain) NSMutableArray * separatorLayers;                                       //@synthesize separatorLayers=_separatorLayers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * titleTextAttributes;                              //@synthesize titleTextAttributes=_titleTextAttributes - In the implementation block
@property (nonatomic,retain) UIAccessibilityElement * lastAccessibilityElementSelected;              //@synthesize lastAccessibilityElementSelected=_lastAccessibilityElementSelected - In the implementation block
@property (assign,nonatomic) BOOL alwaysCollapsed;                                                   //@synthesize alwaysCollapsed=_alwaysCollapsed - In the implementation block
@property (nonatomic,copy) NSString * anyChoiceText;                                                 //@synthesize anyChoiceText=_anyChoiceText - In the implementation block
@property (nonatomic,readonly) double contentMaxX; 
@property (getter=isCollapsed,nonatomic,readonly) BOOL collapsed;                                    //@synthesize collapsed=_collapsed - In the implementation block
@property (nonatomic,copy) id collapsedStateChangedHandler;                                          //@synthesize collapsedStateChangedHandler=_collapsedStateChangedHandler - In the implementation block
@property (assign,nonatomic) double segmentCornerRadius;                                             //@synthesize segmentCornerRadius=_segmentCornerRadius - In the implementation block
@property (assign,nonatomic) UIEdgeInsets segmentInsets;                                             //@synthesize segmentInsets=_segmentInsets - In the implementation block
@property (nonatomic,readonly) NSString * selectedIdentifier; 
@property (assign,nonatomic) long long selectedSegmentIndex;                                         //@synthesize selectedSegmentIndex=_selectedSegmentIndex - In the implementation block
@property (assign,nonatomic) long long lastSelectedIndex;                                            //@synthesize lastSelectedIndex=_lastSelectedIndex - In the implementation block
@property (nonatomic,retain) UIColor * selectionColor;                                               //@synthesize selectionColor=_selectionColor - In the implementation block
@property (nonatomic,retain) UIColor * separatorColor;                                               //@synthesize separatorColor=_separatorColor - In the implementation block
@property (assign,nonatomic) UIEdgeInsets separatorInsets;                                           //@synthesize separatorInsets=_separatorInsets - In the implementation block
@property (nonatomic,copy) id valueChangedHandler;                                                   //@synthesize valueChangedHandler=_valueChangedHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_UIAppearance_setSeparatorInsets:(UIEdgeInsets)arg1 ;
-(void)_UIAppearance_setSeparatorColor:(id)arg1 ;
-(void)_UIAppearance_setSelectionColor:(id)arg1 ;
-(void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)selectIdentifier:(id)arg1 ;
-(UIAccessibilityElement *)lastAccessibilityElementSelected;
-(void)setSelectionIndicatorLayer:(CALayer *)arg1 ;
-(CALayer *)selectionIndicatorLayer;
-(void)setAnyChoiceText:(NSString *)arg1 ;
-(void)setAnyMode:(unsigned long long)arg1 ;
-(void)setSegmentCornerRadius:(double)arg1 ;
-(void)setSegmentLayers:(NSMutableArray *)arg1 ;
-(void)setSeparatorLayers:(NSMutableArray *)arg1 ;
-(CGRect)selectionIndicatorFrameForSegmentAtIndex:(unsigned long long)arg1 ;
-(BOOL)alwaysCollapsed;
-(id)computeFramesForSize:(CGSize)arg1 collapsed:(out BOOL*)arg2 ;
-(unsigned long long)anyMode;
-(id)collapsedStateChangedHandler;
-(void)recomputeWidths;
-(void)setDisplayLabelMap:(NSDictionary *)arg1 ;
-(NSString *)anyChoiceText;
-(NSDictionary *)displayLabelMap;
-(NSMutableArray *)segmentLayers;
-(void)applyTextStyle:(id)arg1 toLayer:(id)arg2 ;
-(void)updateSelectionIndicator;
-(long long)segmentAtPoint:(CGPoint)arg1 ;
-(long long)lastSelectedIndex;
-(void)setLastSelectedIndex:(long long)arg1 ;
-(void)selectWithTouchEvent:(id)arg1 ;
-(NSMutableArray *)separatorLayers;
-(void)switchToAnyMode:(unsigned long long)arg1 ;
-(void)setIdentifiers:(id)arg1 displayLabelMap:(id)arg2 ;
-(void)setAlwaysCollapsed:(BOOL)arg1 ;
-(double)segmentCornerRadius;
-(void)setSegmentInsets:(UIEdgeInsets)arg1 ;
-(void)setLastAccessibilityElementSelected:(UIAccessibilityElement *)arg1 ;
-(void)setCollapsedStateChangedHandler:(id)arg1 ;
-(double)contentMaxX;
-(UIEdgeInsets)segmentInsets;
-(id)accessibilityElementForValueInView;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)setTitleTextAttributes:(NSMutableDictionary *)arg1 ;
-(void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(NSMutableDictionary *)titleTextAttributes;
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
-(void)sendActionsForControlEvents:(unsigned long long)arg1 ;
-(UIColor *)separatorColor;
-(void)setSeparatorColor:(UIColor *)arg1 ;
-(void)setSelectedSegmentIndex:(long long)arg1 ;
-(long long)selectedSegmentIndex;
-(id)titleTextAttributesForState:(unsigned long long)arg1 ;
-(void)commonInit;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(NSMutableArray *)accessibilityElements;
-(void)setAccessibilityElements:(NSMutableArray *)arg1 ;
-(UIColor *)selectionColor;
-(void)setSelectionColor:(UIColor *)arg1 ;
-(BOOL)isCollapsed;
-(void)setIdentifiers:(NSArray *)arg1 ;
-(NSString *)selectedIdentifier;
-(UIEdgeInsets)separatorInsets;
-(void)setSeparatorInsets:(UIEdgeInsets)arg1 ;
-(void)setFrames:(NSArray *)arg1 ;
-(NSArray *)frames;
-(void)setCollapsed:(BOOL)arg1 ;
-(NSArray *)identifiers;
-(id)valueChangedHandler;
-(void)setValueChangedHandler:(id)arg1 ;
-(void)updateLayers;
@end

