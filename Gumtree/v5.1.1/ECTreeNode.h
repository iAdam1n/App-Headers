/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@class NSString, UIImage, NSArray;

@interface ECTreeNode : NSObject {

	BOOL _selected;
	BOOL _hidesSelection;
	BOOL _canBeSelected;
	NSString* _title;
	NSString* _descriptionText;
	UIImage* _iconImage;
	long long _indentationLevel;
	NSString* _itemKey;
	ECTreeNode* _navigationTargetNode;
	NSArray* _children;
	id<NSObject> _representedObject;
	/*^block*/id _childrenCreationBlock;

}

@property (nonatomic,retain) NSString * title;                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * descriptionText;                            //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,retain) UIImage * iconImage;                                   //@synthesize iconImage=_iconImage - In the implementation block
@property (assign,nonatomic) long long indentationLevel;                            //@synthesize indentationLevel=_indentationLevel - In the implementation block
@property (nonatomic,retain) NSString * itemKey;                                    //@synthesize itemKey=_itemKey - In the implementation block
@property (assign,nonatomic) BOOL selected;                                         //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) BOOL hidesSelection;                                   //@synthesize hidesSelection=_hidesSelection - In the implementation block
@property (assign,nonatomic) BOOL canBeSelected;                                    //@synthesize canBeSelected=_canBeSelected - In the implementation block
@property (assign,nonatomic,__weak) ECTreeNode * navigationTargetNode;              //@synthesize navigationTargetNode=_navigationTargetNode - In the implementation block
@property (nonatomic,retain) NSArray * children;                                    //@synthesize children=_children - In the implementation block
@property (nonatomic,retain) id<NSObject> representedObject;                        //@synthesize representedObject=_representedObject - In the implementation block
@property (nonatomic,copy) id childrenCreationBlock;                                //@synthesize childrenCreationBlock=_childrenCreationBlock - In the implementation block
-(BOOL)canBeSelected;
-(void)setCanBeSelected:(BOOL)arg1 ;
-(BOOL)hidesSelection;
-(id)descriptionOfType;
-(void)setItemKey:(NSString *)arg1 ;
-(void)setHidesSelection:(BOOL)arg1 ;
-(void)setChildrenCreationBlock:(id)arg1 ;
-(void)setNavigationTargetNode:(ECTreeNode *)arg1 ;
-(ECTreeNode *)navigationTargetNode;
-(id)childrenCreationBlock;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSString *)title;
-(void)setIndentationLevel:(long long)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(long long)indentationLevel;
-(BOOL)selected;
-(UIImage *)iconImage;
-(unsigned long long)nodeType;
-(id<NSObject>)representedObject;
-(void)setRepresentedObject:(id<NSObject>)arg1 ;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(void)setChildren:(NSArray *)arg1 ;
-(void)setIconImage:(UIImage *)arg1 ;
-(void)assert;
-(NSString *)itemKey;
-(NSArray *)children;
@end

