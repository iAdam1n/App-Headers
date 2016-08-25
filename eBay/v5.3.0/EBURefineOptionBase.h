/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, EBURefineOptionInlineContainer, EBURefineControllerBase, EBURefineOptionContainer;

@interface EBURefineOptionBase : NSObject {

	BOOL _hidden;
	BOOL _disabled;
	BOOL _locked;
	NSString* _identifier;
	NSString* _title;
	NSString* _subtitle;
	id _value;
	long long _indentationLevel;
	NSString* _accessibilityIdentifier;
	EBURefineOptionBase* _parent;

}

@property (nonatomic,readonly) EBURefineOptionInlineContainer * parentInlineContainer; 
@property (nonatomic,readonly) BOOL isInCollapsedInlineContainer; 
@property (nonatomic,readonly) EBURefineControllerBase * controller; 
@property (nonatomic,readonly) EBURefineOptionContainer * parentContainer; 
@property (nonatomic,copy) NSString * identifier;                                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * title;                                                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                                     //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) id value;                                                              //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) long long indentationLevel;                                            //@synthesize indentationLevel=_indentationLevel - In the implementation block
@property (assign,nonatomic) BOOL hidden;                                                           //@synthesize hidden=_hidden - In the implementation block
@property (assign,nonatomic) BOOL disabled;                                                         //@synthesize disabled=_disabled - In the implementation block
@property (assign,nonatomic) BOOL locked;                                                           //@synthesize locked=_locked - In the implementation block
@property (nonatomic,copy) NSString * accessibilityIdentifier;                                      //@synthesize accessibilityIdentifier=_accessibilityIdentifier - In the implementation block
@property (assign,nonatomic,__weak) EBURefineOptionBase * parent;                                   //@synthesize parent=_parent - In the implementation block
@property (nonatomic,readonly) EBURefineOptionBase * root; 
+(id)optionWithIdentifier:(id)arg1 ;
+(id)optionWithIdentifier:(id)arg1 title:(id)arg2 value:(id)arg3 ;
-(EBURefineOptionInlineContainer *)parentInlineContainer;
-(BOOL)isInCollapsedInlineContainer;
-(EBURefineControllerBase *)controller;
-(EBURefineOptionContainer *)parentContainer;
-(void)setHidden:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(long long)integerValue;
-(BOOL)boolValue;
-(NSString *)identifier;
-(NSString *)title;
-(id)value;
-(void)setValue:(id)arg1 ;
-(NSString *)accessibilityIdentifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setLocked:(BOOL)arg1 ;
-(void)setIndentationLevel:(long long)arg1 ;
-(NSString *)subtitle;
-(long long)indentationLevel;
-(void)setSubtitle:(NSString *)arg1 ;
-(BOOL)disabled;
-(void)setDisabled:(BOOL)arg1 ;
-(id)stringValue;
-(void)setAccessibilityIdentifier:(NSString *)arg1 ;
-(BOOL)hidden;
-(EBURefineOptionBase *)root;
-(EBURefineOptionBase *)parent;
-(void)setParent:(EBURefineOptionBase *)arg1 ;
-(BOOL)locked;
@end

