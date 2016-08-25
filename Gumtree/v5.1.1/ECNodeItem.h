/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@class NSString, UIImage, NSArray;

@interface ECNodeItem : NSObject {

	BOOL _selected;
	BOOL _useMultiColumnDisplay;
	BOOL _canBeSelected;
	BOOL _canHaveChildNodes;
	NSString* _title;
	NSString* _descriptionText;
	UIImage* _iconImage;
	id<NSObject> _representedObject;
	ECNodeItem* _parentNode;
	NSArray* _childNodes;

}

@property (nonatomic,retain) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * descriptionText;                  //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,retain) UIImage * iconImage;                         //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,retain) id<NSObject> representedObject;              //@synthesize representedObject=_representedObject - In the implementation block
@property (assign,nonatomic) BOOL selected;                               //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) BOOL useMultiColumnDisplay;                  //@synthesize useMultiColumnDisplay=_useMultiColumnDisplay - In the implementation block
@property (assign,nonatomic) BOOL canBeSelected;                          //@synthesize canBeSelected=_canBeSelected - In the implementation block
@property (assign,nonatomic,__weak) ECNodeItem * parentNode;              //@synthesize parentNode=_parentNode - In the implementation block
@property (nonatomic,__weak,readonly) NSArray * parentNodes; 
@property (nonatomic,retain) NSArray * childNodes;                        //@synthesize childNodes=_childNodes - In the implementation block
@property (assign,nonatomic) BOOL canHaveChildNodes;                      //@synthesize canHaveChildNodes=_canHaveChildNodes - In the implementation block
-(BOOL)canBeSelected;
-(id)descriptionOfRepresentedObject;
-(NSArray *)parentNodes;
-(BOOL)canHaveChildNodes;
-(BOOL)isRootNode;
-(BOOL)isEqualToNodeItem:(id)arg1 ;
-(void)setCanBeSelected:(BOOL)arg1 ;
-(void)setCanHaveChildNodes:(BOOL)arg1 ;
-(BOOL)useMultiColumnDisplay;
-(void)setUseMultiColumnDisplay:(BOOL)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSString *)title;
-(void)setSelected:(BOOL)arg1 ;
-(NSArray *)childNodes;
-(ECNodeItem *)parentNode;
-(BOOL)selected;
-(UIImage *)iconImage;
-(id<NSObject>)representedObject;
-(void)setRepresentedObject:(id<NSObject>)arg1 ;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(void)setChildNodes:(NSArray *)arg1 ;
-(void)setIconImage:(UIImage *)arg1 ;
-(void)setParentNode:(ECNodeItem *)arg1 ;
@end

