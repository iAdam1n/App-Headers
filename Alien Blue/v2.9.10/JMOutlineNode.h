/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol JMOutlineNodeProtocol;
@class NSObject, NSMutableArray;

@interface JMOutlineNode : NSObject {

	BOOL _editable;
	int state_;
	NSObject*<JMOutlineNodeProtocol> delegate_;
	/*^block*/id onSelect_;
	unsigned long long level_;
	JMOutlineNode* parentNode_;
	NSMutableArray* childNodes_;

}

@property (__weak) NSObject*<JMOutlineNodeProtocol> delegate; 
@property (copy) id onSelect; 
@property (readonly) BOOL selected; 
@property (assign) BOOL editable;                                          //@synthesize editable=_editable - In the implementation block
@property (assign) unsigned long long level; 
@property (assign) int state; 
@property (__weak) JMOutlineNode * parentNode; 
@property (nonatomic,retain) NSMutableArray * childNodes; 
+(Class)cellClass;
+(id)node;
-(void)setOnSelect:(id)arg1 ;
-(void)expandNode;
-(void)hideNode;
-(void)collapseNode;
-(void)hideChildren;
-(void)setDelegate:(NSObject*<JMOutlineNodeProtocol>)arg1 ;
-(void)dealloc;
-(id)init;
-(NSObject*<JMOutlineNodeProtocol>)delegate;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)setLevel:(unsigned long long)arg1 ;
-(unsigned long long)level;
-(void)setEditable:(BOOL)arg1 ;
-(NSMutableArray *)childNodes;
-(BOOL)collapsed;
-(JMOutlineNode *)parentNode;
-(BOOL)editable;
-(BOOL)selected;
-(BOOL)hidden;
-(id)onSelect;
-(void)setChildNodes:(NSMutableArray *)arg1 ;
-(void)refresh;
-(id)allChildren;
-(void)addChildNode:(id)arg1 ;
-(void)setParentNode:(JMOutlineNode *)arg1 ;
@end

