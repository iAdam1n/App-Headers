/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EBURefineViewControllerProtocol;
@class NSString, CategoryHistogramValue, UITableViewCell, UIColor, UIViewController;

@interface RefineOptionElement : NSObject {

	BOOL _locked;
	NSString* _identifier;
	long long _indentationLevel;
	CategoryHistogramValue* _categoryHistogram;
	NSString* _title;
	NSString* _details;
	UITableViewCell* _customCell;
	UIColor* _cellBackgroundColor;
	UIColor* _cellTextColor;
	NSString* _accessibilityIdentifier;
	UIViewController*<EBURefineViewControllerProtocol> _controller;

}

@property (nonatomic,copy) NSString * identifier;                                                        //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long indentationLevel;                                                 //@synthesize indentationLevel=_indentationLevel - In the implementation block
@property (nonatomic,retain) CategoryHistogramValue * categoryHistogram;                                 //@synthesize categoryHistogram=_categoryHistogram - In the implementation block
@property (nonatomic,copy) NSString * title;                                                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * details;                                                           //@synthesize details=_details - In the implementation block
@property (nonatomic,retain) UITableViewCell * customCell;                                               //@synthesize customCell=_customCell - In the implementation block
@property (nonatomic,retain) UIColor * cellBackgroundColor;                                              //@synthesize cellBackgroundColor=_cellBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * cellTextColor;                                                    //@synthesize cellTextColor=_cellTextColor - In the implementation block
@property (assign,nonatomic) BOOL locked;                                                                //@synthesize locked=_locked - In the implementation block
@property (nonatomic,copy) NSString * accessibilityIdentifier;                                           //@synthesize accessibilityIdentifier=_accessibilityIdentifier - In the implementation block
@property (nonatomic,retain) UIViewController*<EBURefineViewControllerProtocol> controller;              //@synthesize controller=_controller - In the implementation block
+(id)refineOptionElement:(id)arg1 ;
-(void)setCustomCell:(UITableViewCell *)arg1 ;
-(UITableViewCell *)customCell;
-(UIColor *)cellTextColor;
-(void)setCellTextColor:(UIColor *)arg1 ;
-(void)setCategoryHistogram:(CategoryHistogramValue *)arg1 ;
-(CategoryHistogramValue *)categoryHistogram;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSString *)identifier;
-(NSString *)title;
-(NSString *)accessibilityIdentifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setLocked:(BOOL)arg1 ;
-(void)setIndentationLevel:(long long)arg1 ;
-(long long)indentationLevel;
-(UIViewController*<EBURefineViewControllerProtocol>)controller;
-(void)setController:(UIViewController*<EBURefineViewControllerProtocol>)arg1 ;
-(void)setAccessibilityIdentifier:(NSString *)arg1 ;
-(NSString *)details;
-(void)setDetails:(NSString *)arg1 ;
-(void)setCellBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)cellBackgroundColor;
-(BOOL)locked;
@end

