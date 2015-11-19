/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:17 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol NSObject;
@class NSString, UIImage, NSArray;

@interface ECNodeItem : NSObject {

	BOOL _selected;
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
@property (assign,nonatomic) BOOL canBeSelected;                          //@synthesize canBeSelected=_canBeSelected - In the implementation block
@property (assign,nonatomic,__weak) ECNodeItem * parentNode;              //@synthesize parentNode=_parentNode - In the implementation block
@property (nonatomic,__weak,readonly) NSArray * parentNodes; 
@property (nonatomic,retain) NSArray * childNodes;                        //@synthesize childNodes=_childNodes - In the implementation block
@property (assign,nonatomic) BOOL canHaveChildNodes;                      //@synthesize canHaveChildNodes=_canHaveChildNodes - In the implementation block
-(void)setCanBeSelected:(BOOL)arg1 ;
-(BOOL)canBeSelected;
-(id)descriptionOfRepresentedObject;
-(NSArray *)parentNodes;
-(BOOL)canHaveChildNodes;
-(BOOL)isRootNode;
-(BOOL)isEqualToNodeItem:(id)arg1 ;
-(void)setCanHaveChildNodes:(BOOL)arg1 ;
-(void)setIconImage:(UIImage *)arg1 ;
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
-(void)setChildNodes:(NSArray *)arg1 ;
-(void)setDescriptionText:(NSString *)arg1 ;
-(NSString *)descriptionText;
-(void)setParentNode:(ECNodeItem *)arg1 ;
@end
