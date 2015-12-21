<div class="row">
    <div class="col-xs-12 col-sm-6 col-md-3">
        <div class="panel panel-default">
            <div class="panel-body">
                <?php print render($variables['shop_teaser']); ?>
            </div>
        </div>
    </div>

    <div class="col-xs-12 col-sm-6 col-md-9">
        <div class="panel panel-default">
            <div class="panel-heading">
                <h3 class="panel-title">Pending Orders</h3>
                A list with the pending orders.
            </div>
            <div class="panel-body">
                <?php print $variables['pending_orders_block']; ?>
            </div>
        </div>
    </div>
</div>
