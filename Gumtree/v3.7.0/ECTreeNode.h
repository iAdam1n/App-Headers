/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:54 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
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
-(BOOL)hidesSelection;
-(void)setCanBeSelected:(BOOL)arg1 ;
-(ECTreeNode *)navigationTargetNode;
-(id)childrenCreationBlock;
-(id)descriptionOfType;
-(void)setItemKey:(NSString *)arg1 ;
-(void)setHidesSelection:(BOOL)arg1 ;
-(void)setNavigationTargetNode:(ECTreeNode *)arg1 ;
-(void)setChildrenCreationBlock:(id)arg1 ;
-(void)setIconImage:(UIImage *)arg1 ;
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
-(void)assert;
-(void)setDescriptionText:(NSString *)arg1 ;
-(NSString *)descriptionText;
-(void)setChildren:(NSArray *)arg1 ;
-(NSString *)itemKey;
-(NSArray *)children;
@end
