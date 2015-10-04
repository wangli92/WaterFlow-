//
//  WaterFlowLayout.h
//  WaterFlowDemo
//
//  Created by Hailong.wang on 15/9/18.
//  Copyright (c) 2015年 Hailong.wang. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WaterFlowLayout;
@protocol WaterFlowLayoutDelegate <NSObject>

@required

//使用delegate取得每一个Cell的高度
- (CGFloat)waterFlow:(WaterFlowLayout *)layout heightForCellAtIndexPath:(NSIndexPath *)indexPath;

@end

@interface WaterFlowLayout : UICollectionViewLayout

//声明协议
@property (nonatomic, assign) id <WaterFlowLayoutDelegate> delegate;

//确定列数
@property (nonatomic, assign) NSInteger colum;

//确定内边距
@property (nonatomic, assign) UIEdgeInsets insetSpace;

//确定每个cell之间的距离
@property (nonatomic, assign) NSInteger distance;

@end






